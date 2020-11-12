#include "teamhandler.h"
#include <base/color.h>

int TeamHandler::GetNewTeamColor(int ClientID)
{
    int H = GetHValue(ClientID);
    int S = GetSValue(ClientID);
    int L = GetLValue(ClientID);
    return HSLtoInt(H, S, L);
}

int TeamHandler::GetNewBodyColor(int ClientID)
{
    if(ClientID < 32)
        return GetNewTeamColor(ClientID);
    else if(ClientID < 48)
        return HSLtoInt(0, 0, 0);
    return HSLtoInt(0, 255, 255);
}

int TeamHandler::GetNewFeetColor(int ClientID)
{
    if(ClientID >= 16 && ClientID < 32)
        return HSLtoInt(0, 255, 255);
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

std::string TeamHandler::GetTeamName(int ClientID)
{
    std::string basicname = GetBasicColorName(ClientID);
    if(ClientID < 16)
        return basicname;
    else if(ClientID < 32)
    {
        basicname+="-";
        basicname+="white";
        return basicname;
    }
    else if(ClientID < 48)
    {
        std::string res = "black-";
        res+=basicname;
        return res;
    }
    else
    {
        std::string res = "white-";
        res+=basicname;
        return res;
    }
}

std::string TeamHandler::GetBasicColorName(int ClientID)
{
    switch(ClientID%16)
    {
        case 0: return "cherry";
        case 1: return "cyan";
        case 2: return "emerald";
        case 3: return "grape";
        case 4: return "sunflower";
        case 5: return "mint";
        case 6: return "orchid";
        case 7: return "lavender";
        case 8: return "tangerine";
        case 9: return "lime";
        case 10: return "avocado";
        case 11: return "pool";
        case 12: return "sky";
        case 13: return "eggplant";
        case 14: return "violet";
        case 15: return "pink";
        default: break;
    }
    return "error";
}

int TeamHandler::GetSValue(int ClientID)
{
    return 255;
}

int TeamHandler::GetLValue(int ClientID)
{
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

//This is a fun method blargh
void TeamHandler::HSLtoRGBString(int ClientID, char* buf)
{
    int HSL = GetNewBodyColor(ClientID);
    int h = (HSL >> 16)&(0x000000FF);
    int s = (HSL >> 8)&(0x000000FF);
    int l = HSL&(0x000000FF);
    vec3 hsl = vec3(h/255.0f, s/255.0f, l/255.0f);
    vec3 rgb = HslToRgb(hsl);
    buf[0] = '^';
    for(int i = 0; i < 3; ++i)
        buf[1+i] = '0'+(int)(rgb[i]*10);
    buf[4] = 0;
}


