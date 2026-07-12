#ifndef GUARD_MAIN_MENU_H
#define GUARD_MAIN_MENU_H

void CB2_InitMainMenu(void);
void CB2_ReinitMainMenu(void);
void CB2_NewGameBirchSpeech_FromNewMainMenu(void);
void CreateYesNoMenuParameterized(u8 x, u8 y, u16 baseTileNum, u16 baseBlock, u8 yesNoPalNum, u8 winPalNum);
void NewGameBirchSpeech_SetDefaultPlayerName(u8);

extern const u8 gText_MainMenuNewGame[];
extern const u8 gText_MainMenuContinue[];
extern const u8 gText_MainMenuOption[];
extern const u8 gText_MainMenuMysteryGift[];
extern const u8 gText_MainMenuMysteryGift2[];
extern const u8 gText_MainMenuMysteryEvents[];

#endif // GUARD_MAIN_MENU_H
