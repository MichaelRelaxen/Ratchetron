#ifndef __VSH_H
#define __VSH_H

#include "common.h"

typedef struct game_plugin_interface_t
{
	int32_t (*DoUnk0)(void);
	int32_t (*DoUnk1)(void *);
	int32_t (*DoUnk2)(void *);
	int32_t (*DoUnk3)(int);
	int32_t (*DoUnk4)(int, void *);
	int32_t (*DoUnk5)(void);
	int32_t (*DoUnk6)(void);
	int32_t (*DoUnk7)(void);
	int32_t (*gameInfo)(void *);
	int32_t (*DoUnk9)(void *);
	int32_t (*DoUnk10)(char *);
	int32_t (*DoUnk11)(unsigned long, int);
	int32_t (*DoUnk12)(void);
	int32_t (*DoUnk13)(void);
	int32_t (*DoUnk14)(void);
	int32_t (*GetExecAppType)(int *, int *);
	int32_t (*DoUnk16)(int *);
	int32_t (*DoUnk17)(void);
	int32_t (*DoUnk18)(int *, char *);
	int32_t (*DoUnk19)(int *, char *, char *);
	int32_t (*DoUnk20)(void *);
	int32_t (*DoUnk21)(void);
	int32_t (*commerce2ExecuteStoreBrowse)(int, char *, int, int);
	int32_t (*DoUnk23)(void *);
	int32_t (*DoUnk24)(void *);
	int32_t (*wakeupWithGameExit)(char *, int);
	int32_t (*commerce2Reboot4PrgDl)(int);
	int32_t (*DoUnk27)(char *);
	int32_t (*DoUnk28)(void);
	int32_t (*DoUnk29)(void *);
	int32_t (*commerce2GetOptions)(int *);
	int32_t (*GetUsrdataOnGameExit)(int *);
	int32_t (*GetManualPath)(char *);
	int32_t (*DoUnk33)(void);
	int32_t (*DoUnk34)(char *);
	int32_t (*DoUnk35)(char *);
	int32_t (*DoUnk36)(int, char *);
	int32_t (*DoUnk37)(void);
	int32_t (*DoUnk38)(unsigned long);
	int32_t (*DoUnk39)(char *);
	int32_t (*DoUnk40)(char *, int *, int);
	int32_t (*DoUnk41)(char *, char *, int);
	int32_t (*DoUnk42)(char *, int, char *, int);
	int32_t (*DoUnk43)(void);
	int32_t (*DoUnk44)(void);
	int32_t (*initGameData)(int, int);
	int32_t (*EndGameData)(void);
	int32_t (*getGameDataStat)(char *, char *, void *);
	int32_t (*updateGameData)(char *, char *, void *, void *);
	int32_t (*DoUnk49)(int, int, int, void *, char *);
	int32_t (*DoUnk50)(void);
	int32_t (*DoUnk51)(void);
	int32_t (*cacheInit)(void *, void *);
	int32_t (*cacheClear)(void);
	int32_t (*GetBootInfo)(void *);
	int32_t (*GetTitleId)(void *);
	int32_t (*kbGetSize)(int *, int);
	int32_t (*SetSysVersion)(char *);
	int32_t (*GetDiscInfo)(void *);
	int32_t (*DoUnk59)(int, int, void *, int);
	int32_t (*SetEjectMode)(int);
	int32_t (*gameExec)(char *,char *,int,int,int,int,int);
	int32_t (*getList)(int *, int *, int *, int *, int);
	int32_t (*DoUnk63_GetBootInfo)(int *, char *, int *);
	int32_t (*SetExecDataParam)(int *);
	int32_t (*GetExitInfo)(int *, int *, char *, int *, int *);
	int32_t (*HomePath)(char *);
	int32_t (*DeleteGame)(char *, int);
	int32_t (*OptionPath)(char *, char *);
	int32_t (*ExportPath)(char *);
	int32_t (*ImportPath)(char *);
	int32_t (*Open)(int,char *, int, int *);
	int32_t (*BootCheck)(int *, int *, int, int *, char *);
	int32_t (*PatchCheck)(int,int *);
	int32_t (*Create)(void *, char *, char *, int);
	int32_t (*getInt)(int, int*, int);
	int32_t (*getStr)(int, char *, int, int);
	int32_t (*setInt)(int, int, int);
	int32_t (*setStr)(int, char *, int);
	int32_t (*Close)(char *, char *);
	int32_t (*DoUnk80)(int, int, char *);
	int32_t (*getSizeKB)(int *);
	int32_t (*tInstall)(char *, char *, int, int);
	int32_t (*mtInstall)(int);
	int32_t (*mtWrite)(int, void *);
	int32_t (*mtClose)(int, int);
	int32_t (*getUpPath)(char *);
	int32_t (*getWConPath)(char *);
	int32_t (*delGameData)(char *);
	int32_t (*getDevIdList)(int *, void *);
	int32_t (*getDevInfo)(unsigned long, void *);
	int32_t (*getUsbDevInfo)(unsigned long,void *);
	int32_t (*storageMode)(void);
	int32_t (*notifyCtrl)(int);
	int32_t (*allreadyDisp)(void);
	int32_t (*pspLoad)(void *, int);
	int32_t (*pspSave)(void *, int);
	int32_t (*vmcAssign)(int,char *, void *, int);
	int32_t (*ps1End)(int);
	int32_t (*SetPadRumble)(int);
	int32_t (*DoUnk100)(void *, int);
	int32_t (*DoUnk101)(void);
	int32_t (*DoUnk102)(char *);
	int32_t (*DoUnk103_DeleteGame)(char *);
	int32_t (*DoUnk104)(char *);
} game_plugin_interface;

// used vsh exports: libpaf, vshtask, vshcommon, vshmain

// Gets interface from plugin, uint32_t plugin->GetInterface(uint32_t return from paf_F21655F3, uint32_t identifier)
extern uint32_t *paf_23AFB290(uint32_t arg, uint32_t id); 
#define plugin_GetInterface paf_23AFB290

// Return the texture address by plugin name and texture name.
extern uint32_t paf_3A8454FC(int32_t* texptr, uint32_t plugin, const char* name);
#define LoadRCOTexture paf_3A8454FC

// Finds a loaded plugin
extern uint32_t paf_F21655F3(const char *sprx_name);
#define View_Find paf_F21655F3

// Displays a notification in XMB, calls vshcommon_A20E43DB with texture "tex_notification_info"
extern int32_t vshtask_A02D46E7(int32_t arg, const char *msg);
#define vshtask_notify(msg) vshtask_A02D46E7(0, msg)

extern uint32_t vshcommon_A20E43DB(int32_t, const char* eventName, int32_t, int32_t* texture, int32_t*, const char*, const char*, float, const wchar_t* text, int32_t, int32_t, int32_t);
#define NotifyWithTexture vshcommon_A20E43DB

// Get running mode flag, 0 = xmb, 1 = game, 2 = dvd/bd, 3 = psx/psp emu 
extern uint32_t vshmain_EB757101(void);
#define GetCurrentRunningMode vshmain_EB757101
#define IS_ON_XMB		(GetCurrentRunningMode() == 0)
#define IS_INGAME		(GetCurrentRunningMode() != 0)

// Returns game u32 process id
extern uint32_t vshmain_0624D3AE(void);  
#define GetGameProcessID vshmain_0624D3AE

game_plugin_interface * game_interface;
static int get_game_info(void) {
	if(IS_ON_XMB) return 0; 

	int is_ingame = View_Find("game_plugin");

	if(is_ingame) {
		char _game_info[0x120];
		game_interface = (game_plugin_interface *)plugin_GetInterface(is_ingame, 1);
		game_interface->gameInfo(_game_info);

		snprintf(_game_TitleID, 10, "%s", _game_info+0x04);
		snprintf(_game_Title,   63, "%s", _game_info+0x14);
	}
	return is_ingame;
}

#endif