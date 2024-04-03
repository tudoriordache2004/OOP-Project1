#ifndef footballplayer_h
#define footballplayer_h
#include <iostream>
#include <cstring>
class Football_Player
{
private:
    std::string Player_Second_Name;
    std::string Player_Name;
    std::string team_name;
    std::string Nationality;
    std::string Position;
    int Overall;
    int Price;

public:
    Football_Player(std::string Player_Second_Name, std::string Player_Name, std::string team_name, std::string Nationality, std::string Position, int Overall, int Price);

    std::string getName(void) const;
    std::string getSecond_Name(void) const;
    std::string getTeam_name(void) const;
    std::string getNationality(void) const;
    std::string getPosition(void) const;
    int getOverall(void) const;
    int getPrice(void) const;
    friend std::ostream &operator<<(std::ostream &os, const Football_Player &football_player);

    bool operator==(const Football_Player &player);
};
#endif
