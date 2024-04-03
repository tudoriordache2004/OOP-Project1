#include <iostream>
#include <vector>
#include <cstring>
#include "../include/fut_player.h"
FUT_Player::FUT_Player(std::string Player_Username, std::string Player_Password, int Balance)
{
    this->Player_Username = Player_Username;
    this->Player_Password = Player_Password;
    this->Balance = Balance;
}
std::string FUT_Player::getUsername(void) const { return Player_Username; }
std::string FUT_Player::getPassword(void) const { return Player_Password; }
int FUT_Player::getBalance(void) { return Balance; }