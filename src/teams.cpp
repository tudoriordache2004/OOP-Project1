#include <iostream>
#include <vector>
#include <cstring>
#include "../include/teamsheader.h"
std::string Team::get_team_name(void)
{
    return team_name;
}
std::vector<Football_Player> Team::get_goalkeepers()
{
    return goalkeepers;
};
std::vector<Football_Player> Team::get_defenders()
{
    return defenders;
};
std::vector<Football_Player> Team::get_midfielders()
{
    return midfielders;
};
std::vector<Football_Player> Team::get_attackers()
{
    return attackers;
};
Team::Team(std::string team_name)
{
    this->team_name = team_name;
};
void Team::addPlayer(Football_Player &player)
{
    if (player.getPosition() == "GK")
    {
        goalkeepers.push_back(player);
    }
    else if (player.getPosition() == "DEF")
    {
        defenders.push_back(player);
    }
    else if (player.getPosition() == "MID")
    {
        midfielders.push_back(player);
    }
    else if (player.getPosition() == "ATT")
    {
        attackers.push_back(player);
    }
}