/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#include "dm.h"


CGameControllerCatch64::CGameControllerCatch64(CGameContext *pGameServer)
: IGameController(pGameServer)
{
	m_pGameType = "Catch64";
}
