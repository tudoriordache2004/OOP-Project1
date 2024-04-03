#ifndef teamsheader_h
#define teamsheader_h
#include <iostream>
#include <vector>
#include <cstring>
#include "footballplayer.h"
class Team
{
private:
    std::string team_name;
    std::vector<Football_Player> goalkeepers;
    std::vector<Football_Player> defenders;
    std::vector<Football_Player> midfielders;
    std::vector<Football_Player> attackers;

public:
    std::string get_team_name(void);
    std::vector<Football_Player> get_goalkeepers();
    std::vector<Football_Player> get_defenders();
    std::vector<Football_Player> get_midfielders();
    std::vector<Football_Player> get_attackers();
    Team(std::string team_name);
    void addPlayer(Football_Player &player);
};
#endif