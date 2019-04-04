#include "catch64.h"


CGameControllerCatch64::CGameControllerCatch64(CGameContext *pGameServer)
: IGameController(pGameServer)
{
	m_pGameType = "Catch64";
}
