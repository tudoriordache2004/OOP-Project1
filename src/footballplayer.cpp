#include <iostream>
#include <cstring>
#include "../include/footballplayer.h"
Football_Player::Football_Player(std::string Player_Second_Name, std::string Player_Name, std::string team_name, std::string Nationality, std::string Position, int Overall, int Price)
{
    this->Player_Name = Player_Name;
    this->Player_Second_Name = Player_Second_Name;
    this->team_name = team_name;
    this->Nationality = Nationality;
    this->Position = Position;
    this->Overall = Overall;
    this->Price = Price;
};

std::string Football_Player::getName(void) const { return Player_Name; }
std::string Football_Player::getSecond_Name(void) const { return Player_Second_Name; }
std::string Football_Player::getTeam_name(void) const { return team_name; }
std::string Football_Player::getNationality(void) const { return Nationality; }
std::string Football_Player::getPosition(void) const { return Position; }
int Football_Player::getOverall(void) const { return Overall; }
int Football_Player::getPrice(void) const { return Price; }

std::ostream &operator<<(std::ostream &os, const Football_Player &football_player)
{
    if (football_player.getName() != "")
        os << football_player.getPosition() << ": " << football_player.getName() << " " << football_player.getSecond_Name() << ", " << football_player.getTeam_name() << ", " << football_player.getOverall();
    else
        os << football_player.getPosition() << ": " << football_player.getSecond_Name() << ", " << football_player.getTeam_name() << ", " << football_player.getOverall();
    os << "\n";
    return os;
};

bool Football_Player::operator==(const Football_Player &player)
{
    if (player.Player_Name == Player_Name && player.Player_Second_Name == Player_Second_Name && player.team_name == team_name && player.Overall == Overall && player.Nationality == Nationality && player.Position == Position && player.Overall == Overall && player.Price == Price)
        return true;
    else
        return false;
}
