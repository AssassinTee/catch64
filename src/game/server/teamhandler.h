#ifndef GAME_SERVER_TEAMHANDLER_H
#define GAME_SERVER_TEAMHANDLER_H

class TeamHandler
{
public:
    TeamHandler(){}
    ~TeamHandler(){}

    int GetNewTeamColor(int ClientID);//returns HSV color
    int GetNewBodyColor(int ClientID);
    int GetNewFeetColor(int ClientID);
private:
    int GetHValue(int ClientID);
    int GetSValue(int ClientID);
    int GetLValue(int ClientID);

    int HSLtoInt(int H, int S, int L);
}

#endif // GAME_SERVER_TEAMHANDLER_H
