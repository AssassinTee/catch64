#ifndef GAME_SERVER_TEAMHANDLER_H
#define GAME_SERVER_TEAMHANDLER_H

#include <string>

class TeamHandler
{
public:
    //~TeamHandler(){}

    static TeamHandler& getInstance()
    {
        static TeamHandler instance; // Guaranteed to be destroyed.
                                  // Instantiated on first use.
        return instance;
    }
    TeamHandler(TeamHandler const&)     = delete;
    void operator=(TeamHandler const&)  = delete;

    int GetNewTeamColor(int ClientID);//returns HSV color
    int GetNewBodyColor(int ClientID);
    int GetNewFeetColor(int ClientID);
    std::string GetTeamName(int ClientID);
    void HSLtoRGBString(int ClientID, char* buf);
private:
    std::string GetBasicColorName(int ClientID);
    TeamHandler(){}
    int GetHValue(int ClientID);
    int GetSValue(int ClientID);
    int GetLValue(int ClientID);

    int HSLtoInt(int H, int S, int L);
};

#endif // GAME_SERVER_TEAMHANDLER_H
