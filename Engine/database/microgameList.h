/* @brief New games can be added to the GB ROM by adding new entries to this list.
 *
 *        The macro looks like this:
 *        MICROGAME(gameId, gameMainFunction, bankId, duration, name, author, instructions)
 * 
 * @param gameId           The ID the game is associated with
 * @param gameMainFunction The function that will be called to run the game
 * @param bankId           Which bank ID the game code is located in
 * @param duration         How long the game takes until finish
 * @param name             Display name of the game
 * @param author           Author of the game
 * @param instructions     Instructions for the game
 */

#ifdef MICROGAME
MICROGAME(MG_TEMPLATE_FACE, templateFaceMicrogameMain, 1U, 3U, "TEMPLATE FACE GAME", "TEMPLATE DEV", "MAKE HAPPY!")
MICROGAME(MG_BOWNLY_BOW, bownlyBowMicrogameMain, 2U, 4U, "BOW", "BOWNLY", "SHOOT!")
MICROGAME(MG_BOWNLY_MAGIPANELS5, bownlyMP5MicrogameMain, 2U, 4U, "MAGIPANELS 5", "BOWNLY", "INCREASE TO 5!")
MICROGAME(MG_BOWNLY_PASTEL, bownlyPastelMicrogameMain, 2U, 4U, "PASTEL", "BOWNLY", "COLLECT HEARTS!")
MICROGAME(MG_DOVESAM_PADDLE, dovesamPaddleMicrogameMain, 7U, 5U, "PADDLE", "DOVESAM", "BOUNCE THE BALL")
MICROGAME(MG_DOVESAM_CODE, dovesamCodeCrackMicrogameMain, 7U, 4U, "CODECRACK", "DOVESAM", "CRACK THE CODE")
MICROGAME(MG_JOAO_SAVETHEKIDS, joaoSaveTheKidsMicrogameMain, 11U, 5U, "SAVE THE KIDS", "JOAOMAKESGAMES", "SAVE THE KIDS!")
MICROGAME(MG_OSHF_RPS, oshfRPSMicrogameMain, 10U, 3U, "RPS", "OSHF", "JANKEN!")
MICROGAME(MG_OSHF_HB, oshfHBMicrogameMain, 10U, 3U, "HUNGRY BIRD", "OSHF", "GET WORM")
MICROGAME(MG_ADRIANG_CLOCKWISE, adrianJGClockwiseMicrogameMain, 6U, 5U, "CLOCKWISE", "ADRIANJG", "CLOCKWISE!")
MICROGAME(MG_ADRIANG_HITTHENOTE, adrianJGHitTheNoteMicrogameMain, 6U, 3U, "HIT THE NOTE", "ADRIANJG", "HIT THE NOTE!")
MICROGAME(MG_SYNCHINGFEELING_EGG, synchingFeelingEggMicrogameMain, 11U, 4U, "EGG", "SYNCHINGFEELING", "JUMP")
MICROGAME(MG_SYNCHINGFEELING_GHOST, synchingFeelingGhostMicrogameMain, 11U, 4U, "GHOST", "SYNCHINGFEELING", "LOOK")
#endif
