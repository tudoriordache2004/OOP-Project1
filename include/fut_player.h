#ifndef player_h
#define player_h
#include <iostream>
#include <vector>
#include <cstring>
class FUT_Player
{
private:
    std::string Player_Username;
    std::string Player_Password;
    int Balance;

public:
    FUT_Player(std::string Player_Username, std::string Player_Password, int Balance);
    std::string getUsername(void) const;
    std::string getPassword(void) const;
    int getBalance(void);
};
#endif