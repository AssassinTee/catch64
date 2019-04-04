#include "teamhandler.h"

int TeamHandler::GetNewTeamColor(int ClientID)
{
    int H = GetHValue(ClientID);
    int S = GetSValue(ClientID);
    int L = GetLValue(ClientID);
    return HSLtoInt(H, S, L);
}

int TeamHandler::GetNewBodyColor(int ClientID)
{
    if(ClientID < 48)
        return GetNewTeamColor(ClientID);
    return HSLtoInt(0, 255, 255);
}

int TeamHandler::GetNewFeetColor(int ClientID)
{
    return GetNewTeamColor(ClientID);
}

int TeamHandler::GetHValue(int ClientID)
{
    int id = ClientID%16;
    switch(id)
    {
        case 0:     return 0;
        case 8:     return 16;
        case 4:     return 32;
        case 9:     return 48;
        case 2:     return 64;
        case 10:    return 80;
        case 5:     return 96;
        case 11:    return 112;
        case 1:     return 128;
        case 12:    return 144;
        case 6:     return 160;
        case 13:    return 176;
        case 3:     return 192;
        case 14:    return 208;
        case 7:     return 224;
        case 15:    return 240;
        default:    break;
    }
    return 0;
}

int TeamHandler::GetSValue(int ClientID)
{
    return 255;
}

int TeamHandler::GetLValue(int ClientID)
{
    if(ClientID < 16)
        return 128;
    else if(ClientID < 32)
        return 64;
    else if(ClientID < 48)
        return 196;
    return 128;
}

int TeamHandler::HSLtoInt(int H, int S, int L)
{
    int color = 0;
    color = (color&0xFF00FFFF) | (H << 16);
    color = (color&0xFFFF00FF) | (S << 8);
    color = (color&0xFFFFFF00) | L;
    color = (color&0x00FFFFFF) | (255 << 24);
    return color;
}
