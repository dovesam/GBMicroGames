#include <gb/gb.h>
#include <rand.h>

#include "../../Engine/common.h"
#include "../../Engine/enums.h"
#include "../../Engine/fade.h"
#include "../../Engine/songPlayer.h"

#include "../sfx.h"
#include "../res/tiles/bownlyMP5DiceTiles.h"
#include "../res/tiles/bownlyMP5HeartTiles.h"
#include "../res/tiles/bownlyMP5StageTiles.h"
#include "../res/maps/bownlyMP5StageColMap.h"
#include "../res/maps/bownlyMP5StageTopMap.h"
#include "../res/maps/bownlyMP5PanelMaps.h"
#include "../res/sprites/bownlySprPreston.h"
#include "../structs/BownlyPanel.h"

extern const hUGESong_t bownlyTheWhiteSong;

extern UINT8 curJoypad;
extern UINT8 prevJoypad;
extern UINT8 i;  // Used mostly for loops
extern UINT8 j;  // Used mostly for loops
extern UINT8 k;  // Used for whatever
extern INT8 l;  // Used for whatever
extern UINT8 m;  // Used for menus generally
extern UINT8 n;  // Used for menus generally
extern UINT8 r;  // Used for randomization stuff

extern UINT8 substate;
extern UINT8 mgDifficulty;  // Readonly!
extern UINT8 mgSpeed;  // Readonly!
extern UINT8 mgStatus;

extern UINT8 animTick;
extern UINT8 animFrame;

static UINT8 buttonHoldTick;
static UINT8 screenShakeTick;
static UINT8 flipAnimTick;
static UINT8 flipDuration;

#define prestonXOffset 32U
#define prestonYOffset 32U
static UINT8 prestonXIndex;
static UINT8 prestonYIndex;
static UINT8 prestonIsHorz;
static UINT8 prestonHP;

static BownlyPanel gridPanels[25U];
#define panelsXOrigin 5U
#define panelsYOrigin 4U
static UINT8 remaining5s;
static UINT8 didWinFlip;

#define SPRID_PRESTON 0U
#define SPRID_HEARTS 4U
#define SPRTILE_PRESTON 0U
#define SPRTILE_HEARTS 0x40U
#define BKGTILE_STAGE 0x40U
#define BKGTILE_DICE 0x50U


/* SUBSTATE METHODS */
static void phaseMagipanels5Init();
static void phaseMagipanels5Loop();

/* INPUT METHODS */
static void inputsMP5();

/* HELPER METHODS */
static void initGrid();
static void incrementPanel(BownlyPanel*);
static void setupPanel(UINT8, UINT8, UINT8, UINT8);

/* DISPLAY METHODS */
static void animatePreston();
static void drawPanel(UINT8, UINT8, BownlyPanel*);
static void setupHearts();
static void tryShakeScreen();
static void updateFlippingPanels();


void bownlyMP5MicrogameMain()
{
    curJoypad = joypad();

    switch (substate)
    {
        case SUB_INIT:
            phaseMagipanels5Init();
            break;
        case SUB_LOOP:
            phaseMagipanels5Loop();
            break;
        default:  // Abort to title in the event of unexpected state
            gamestate = STATE_TITLE;
            substate = SUB_INIT;
            break;
    }
    prevJoypad = curJoypad;
}


/******************************** SUBSTATE METHODS *******************************/
static void phaseMagipanels5Init()
{
    // Initializations
    init_bkg(0xFFU);
    animTick = 0U;
    flipAnimTick = 0U;

    buttonHoldTick = 0U;
    screenShakeTick = 0U;

    prestonXIndex = 0U;
    prestonYIndex = 1U;
    prestonIsHorz = FALSE;
    prestonHP = 1U;

    didWinFlip = FALSE;
    remaining5s = mgDifficulty + 1U;
    flipDuration = 21U - mgDifficulty - mgDifficulty;  // Looks dumb, but it's more space efficient

    set_bkg_data(BKGTILE_DICE, 36U, bownlyMP5DiceTiles);
    set_bkg_data(BKGTILE_STAGE, 14U, bownlyMP5StageTiles);
    set_bkg_tiles(0U, 0U, 20U, 2U, bownlyMP5StageTopMap);
    set_bkg_tiles(0U, 2U, 2U, 14U, bownlyMP5StageColMap);
    set_bkg_tiles(18U, 2U, 2U, 14U, bownlyMP5StageColMap);
    for (i = 0U; i != 20U; ++i)
    {
        set_bkg_tile_xy(i, 16U, 0x4C);
        set_bkg_tile_xy(i, 17U, 0x4D);
    }

    set_sprite_data(SPRTILE_HEARTS, 2U, bownlyMP5HeartTiles);
    setupHearts();
    set_sprite_data(SPRTILE_PRESTON, bownlySprPreston_TILE_COUNT, bownlySprPreston_tiles);

    initGrid();

    playSong(&bownlyTheWhiteSong);

    fadein();
    substate = SUB_LOOP;

}

static void phaseMagipanels5Loop()
{
    ++animTick;
    if (flipAnimTick != 0U && flipAnimTick != flipDuration)
        ++flipAnimTick;
    else
        flipAnimTick = 0U;

    inputsMP5();

    animatePreston();
    if (flipAnimTick != 0U)
        updateFlippingPanels();
    
    tryShakeScreen();

}


/******************************** INPUT METHODS *********************************/
static void inputsMP5()
{
    if (!curJoypad & (J_UP | J_DOWN | J_LEFT | J_RIGHT))
    {
        buttonHoldTick = 0U;
    }

    if (screenShakeTick == 0U && mgStatus != LOST)
    {
        if(curJoypad & J_LEFT)
        {
            ++buttonHoldTick;
            if (!(prevJoypad & J_LEFT) || (buttonHoldTick % 16U == 0U))
            {
                prestonIsHorz = TRUE;
                if (prestonXIndex == 0U || prestonXIndex == 1U)
                    prestonXIndex = 5U;
                else
                    --prestonXIndex;
                prestonYIndex = 0U;
                playMoveSfx();
            }
        }
        else if(curJoypad & J_RIGHT)
        {
            ++buttonHoldTick;
            if (!(prevJoypad & J_RIGHT) || (buttonHoldTick % 16U == 0U))
            {
                prestonIsHorz = TRUE;
                prestonXIndex = (prestonXIndex) % 5U + 1U;
                prestonYIndex = 0U;
                playMoveSfx();
            }
        }
        else if(curJoypad & J_UP)
        {
            ++buttonHoldTick;
            if (!(prevJoypad & J_UP) || (buttonHoldTick % 16U == 0U))
            {
                prestonIsHorz = FALSE;
                if (prestonYIndex == 0U || prestonYIndex == 1U)
                    prestonYIndex = 5U;
                else
                    --prestonYIndex;
                prestonXIndex = 0U;
                playMoveSfx();
            }
        }
        else if(curJoypad & J_DOWN)
        {
            ++buttonHoldTick;
            if (!(prevJoypad & J_DOWN) || (buttonHoldTick % 16U == 0U))
            {
                prestonIsHorz = FALSE;
                prestonYIndex = (prestonYIndex) % 5U + 1U;
                prestonXIndex = 0U;
                playMoveSfx();
            }
        }

        // Flip panels
        if (mgStatus == PLAYING)
        {
            if (curJoypad & J_A && !(prevJoypad & J_A) && flipAnimTick == 0U)
            {
                playCollisionSfx();
                flipAnimTick = 1U;

                // Increment panels
                if (prestonIsHorz == TRUE)
                {
                    j = (prestonXIndex - 1U) * 5U;
                    for (i = 0U; i != 5U; ++i)
                        incrementPanel(&gridPanels[j+i]);
                }
                else
                {
                    j = (prestonYIndex - 1U);
                    for (i = 0U; i != 5U; ++i)
                    {
                        incrementPanel(&gridPanels[j]);
                        j += 5U;
                    }
                }
            }
        }
    }
}


/******************************** HELPER METHODS *********************************/
static void initGrid()
{
    for (i = 0U; i != 5U; ++i)
    {
        for (j = 0U; j != 5U; ++j)
        {
            l = i*5U+j;
            setupPanel(l, i, j, 6U);
        }
    }

    // Setting up active panels
    i = getRandUint8(5U);
    j = getRandUint8(5U);
    setupPanel(i*5U+j, i, j, getRandUint8(2U));

    if (mgDifficulty != 0U)  // AKA, if 1 or 2
    {
        k = getRandUint8(2U);  // Horz or vert
        if (k == 0U)  // Horz
        {
            if (++i == 5U)
                i = 0U;
            setupPanel(i*5U+j, i, j, getRandUint8(2U));
        }
        else  // Vert
        {
            if (++j == 5U)
                j = 0U;
            setupPanel(i*5U+j, i, j, getRandUint8(2U));
        }
    }
    if (mgDifficulty == 2U)
    {
        if (k == 0U)  // Horz
        {
            if (++i == 5U)
                i = 0U;
            setupPanel(i*5U+j, i, j, getRandUint8(2U));
        }
        else  // Vert
        {
            if (++j == 5U)
                j = 0U;
            setupPanel(i*5U+j, i, j, getRandUint8(2U));
        }
    }
}

static void incrementPanel(BownlyPanel* panel)
{
    if (panel->panelValue != 6U)
    {
        panel->isFlipping = 1U;

        l = panel->panelValue + 1U;
        if (l == 5U)  // Panel has exceeded max capacity
        {
            l = 6U;
            if (screenShakeTick == 0U)
                screenShakeTick = 1U;

            mgStatus = LOST;
            // playerHurt();
            playHurtSfx();
            set_sprite_tile(SPRID_HEARTS + 6U, SPRTILE_HEARTS + 1U);
        }
        panel->panelValue = l;

        if (l == 4U)  // Level 5
            --remaining5s;
    }
}

static void setupPanel(UINT8 index, UINT8 x, UINT8 y, UINT8 val)
{
    gridPanels[index].xIndex = x;
    gridPanels[index].yIndex = y;
    gridPanels[index].panelValue = val;
    gridPanels[index].panelId = index;
    if (val == 5U)
        gridPanels[index].isWinner = 1U;
    else
        gridPanels[index].isWinner = 0U;
    gridPanels[index].isFlipping = 0U;

    drawPanel(panelsXOrigin + (gridPanels[index].xIndex << 1U),
        panelsYOrigin + (gridPanels[index].yIndex << 1U), &gridPanels[index]);
}


/******************************** DISPLAY METHODS ********************************/
static void animatePreston()
{
    if (mgStatus == LOST)  // Hurt anims
        animFrame = 6U;
    else if (flipAnimTick != 0U)  // Attack anims
    {
        // TODO: spot for potential efficiency improvemnt
        if (flipAnimTick == 1U)
            // animTick = 0U;  // Reset start frame for the idle anim
            animFrame = 3U;
        else if (flipAnimTick == 2U || flipAnimTick == 3U)
            animFrame = 3U;
        else if (flipAnimTick == 4U || flipAnimTick == 5U || flipAnimTick == 6U)
            animFrame = 4U;
        else
        {
            animFrame = 5U;
        }
    }
    else
    {
        animFrame = (animTick >> 4U) % 4U;
        if (animFrame == 3U)
            animFrame = 1U;
    }

    if (prestonIsHorz == FALSE)
        animFrame += 7U;

    i = (prestonXIndex << 4U) + prestonXOffset;
    j = (prestonYIndex << 4U) + prestonYOffset;
    move_metasprite(bownlySprPreston_metasprites[animFrame], SPRTILE_PRESTON, SPRID_PRESTON, i, j);
}

static void drawPanel(UINT8 xCoord, UINT8 yCoord, BownlyPanel* panel)
{
    switch(panel->panelValue)
    {
        case 0U: set_bkg_tiles(xCoord, yCoord, 2U, 2U, panel0Map); break;
        case 1U: set_bkg_tiles(xCoord, yCoord, 2U, 2U, panel1Map); break;
        case 2U: set_bkg_tiles(xCoord, yCoord, 2U, 2U, panel2Map); break;
        case 3U: set_bkg_tiles(xCoord, yCoord, 2U, 2U, panel3Map); break;
        case 4U: set_bkg_tiles(xCoord, yCoord, 2U, 2U, panel4Map); break;
        case 5U: set_bkg_tiles(xCoord, yCoord, 2U, 2U, panelPointMap); break;
        default: set_bkg_tiles(xCoord, yCoord, 2U, 2U, panelXMap); break;
    }
}

static void setupHearts()
{
    for (i = 0; i != 7; ++i)
    {
        set_sprite_tile(SPRID_HEARTS + i, SPRTILE_HEARTS + 1U);
        move_sprite(SPRID_HEARTS + i, 136U, 47U + 12U * i);
    }
    set_sprite_tile(SPRID_HEARTS + 6U, SPRTILE_HEARTS);
}

static void tryShakeScreen()
{
    if (screenShakeTick != 0U)
    {
        if (screenShakeTick != 26U)
        {
            ++screenShakeTick;
            switch (screenShakeTick)
            {
                case 5U:
                    scroll_bkg(1, 0);
                    break;
                case 10U:
                    scroll_bkg(-2, 0);
                    break;
                case 15U:
                    scroll_bkg(0, 1);
                    break;
                case 20U:
                    scroll_bkg(0, -2);
                    break;
                case 25U:
                    move_bkg(0, 0);
                    screenShakeTick = 0U;
                    break;
            }
        }
    }
}

static void updateFlippingPanels()
{
    if (flipAnimTick == flipDuration - 1U)
    {
        for (i = 0; i != 25; ++i)
        {
            if (gridPanels[i].isFlipping == 1U)
            {
                gridPanels[i].isFlipping = 0U;
                drawPanel(panelsXOrigin + (gridPanels[i].xIndex << 1U),
                    panelsYOrigin + (gridPanels[i].yIndex << 1U), &gridPanels[i]);
            }
        }

        // Pretty sloppy to put the win check here, but who's going to stop me?
        if (remaining5s == 0U && mgStatus != LOST)
        {
            mgStatus = WON;

            // Restart flip for point panels
            if (didWinFlip == FALSE)
            {
                playCollisionSfx();
                didWinFlip = TRUE;
                flipAnimTick = 1U;
                for (i = 0U; i != 25U; ++i)
                {
                    gridPanels[i].panelValue = 5U;
                    gridPanels[i].isFlipping = 1U;
                }
                for (i = 0U; i != 6U; ++i)
                    set_sprite_tile(SPRID_HEARTS + i, SPRTILE_HEARTS);

            }
        }
    }
    else
    {
        for (i = 0; i != 25; ++i)
        {
            if (gridPanels[i].isFlipping == 1U)
            {
                m = (flipAnimTick) >> 3U;
                if (m == 0U || m == 2U)
                {
                    set_bkg_tiles(panelsXOrigin + (gridPanels[i].xIndex << 1U),
                        panelsYOrigin + (gridPanels[i].yIndex << 1U), 2U, 2U, panelFlip1Map);
                }
                else
                {
                    set_bkg_tiles(panelsXOrigin + (gridPanels[i].xIndex << 1U),
                        panelsYOrigin + (gridPanels[i].yIndex << 1U), 2U, 2U, panelFlip2Map);
                }
            }
        }
    }
}
