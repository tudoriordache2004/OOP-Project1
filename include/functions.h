#ifndef functions_h
#define functions_h
#include "footballplayer.h"
#include "teamsheader.h"
#include "fut_player.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <conio.h>
#include <unistd.h>
bool isNumber(std::string s)
{
    if (s.size() == 0)
        return false;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] >= '0' && s[i] <= '9') == false)
        {
            return false;
        }
    }
    return true;
};

void log_in(std::vector<FUT_Player> players, int &balance, std::string &playerusername)
{
    std::string username;
    std::string password;
    char ch;
    bool usn = false;
    std::cout << "EA SPORTS!" << std::endl;
    usleep(3000000);
    std::cout << "IT'S IN THE GAME!" << std::endl;
    usleep(1500000);
    std::cout << "Welcome to EA FC 24!" << std::endl;
    usleep(1000000);
    while (!usn)
    {
        std::cout << "Enter your EA FC 24 username: ";
        std::getline(std::cin, username);
        usleep(500000);
        for (auto player : players)
        {
            if (player.getUsername() == username)
            {
                std::cout << "Welcome, " << username << "!\n";
                std::cout << "Now enter your password: ";
                bool pass = false;
                while (!pass)
                {
                    while ((ch = _getch()) != 13)
                    { // ASCII pentru "Enter"
                        if (ch == 8)
                        { // ASCII pentru "Backspace"
                            if (!password.empty())
                            {
                                std::cout << "\b \b";
                                password.pop_back();
                            }
                        }
                        else
                        {
                            std::cout << '*';
                            password += ch;
                        }
                    }
                    usleep(1000000);
                    std::cout << std::endl;
                    if (player.getPassword() == password)
                    {
                        pass = true;
                        usn = true;
                        playerusername = player.getUsername();
                        balance = player.getBalance();
                        std::cout << "Your authentification was succesful, " << username << "!\n";
                        usleep(1000000);
                        std::cout << "Your balance is " << balance << " coins." << std::endl;
                        usleep(1000000);
                        std::cout << "Now let's create your EA FC 24 Team!" << std::endl;
                        usleep(1500000);
                        break;
                    }
                    else
                    {
                        std::cout << "Your password is incorrect, try again!" << std::endl;
                        std::cout << "Enter your password: ";
                        password.clear();
                    }
                }
            }
        }
        if (!usn)
            std::cout << "This username does not exist. Try again.\n";
    }
};

void Choose_Formation(int &fundasi, int &mijlocasi, int &atacanti)
{
    std::string def;
    std::string mid;
    std::string att;
    std::cout << "Let's start with the formation." << std::endl;
    usleep(1500000);
    while (true)
    {
        std::cout << "Defenders: ";
        std::cin >> def;
        usleep(1500000);
        if (def == "3" || def == "4" || def == "5")
        {
            switch (stoll(def))
            {
            case 3:
            {
                std::cout << "If you preffer an offensive football style, a 3-back should do the job! :)" << std::endl;
                break;
            }
            case 4:
            {
                std::cout << "The classic..." << std::endl;
                break;
            }
            case 5:
            {
                std::cout << "I see you're a deffensive minded coach! :)" << std::endl;
                break;
            }
            }
            fundasi = stoll(def);
            break;
        }
        else
            std::cout << "You can't really build a formation with " << def << " defenders, you know? Let's try again, maybe? :)" << std::endl;
    }
    while (true)
    {
        std::cout << "Midfielders: ";
        std::cin >> mid;
        usleep(1500000);
        if (mid == "2" || mid == "3" || mid == "4" || mid == "5")
        {
            mijlocasi = stoll(mid);
            break;
        }
        else
            std::cout << "You can't really build a formation with " << mid << " midfielders, you know? Let's try again, maybe? :)" << std::endl;
    }
    std::cout << "And finally...\n";
    while (true)
    {
        std::cout << "Attackers: ";
        std::cin >> att;
        usleep(1500000);
        if (isNumber(att) == true)
            if (stoll(att) + fundasi + mijlocasi == 10)
            {
                atacanti = stoll(att);
                break;
            }
            else
                std::cout << "A football team has 11 players, not " << fundasi + mijlocasi + stoll(att) + 1 << " players. :)" << std::endl;
        else
            std::cout << att << " is not a number :)" << std::endl;
    }
    std::cout << "Your chosen formation is " << fundasi << "-" << mijlocasi << "-" << atacanti << ". " << std::endl;
    usleep(2000000);
    std::cout << "Let's choose your players now!" << std::endl;
    usleep(2000000);
}

void PremierLeagueTeams()
{
    std::cout << "-----------------------------------------------------------------\n";
    std::cout << "1. Tottenham" << std::endl;
    std::cout << "2. Manchester City" << std::endl;
    std::cout << "3. Chelsea" << std::endl;
    std::cout << "4. Manchester United" << std::endl;
    std::cout << "5. Liverpool" << std::endl;
    std::cout << "6. Arsenal" << std::endl;
    std::cout << "7. Leicester City" << std::endl;
    std::cout << "8. West Ham United" << std::endl;
    std::cout << "9. Brighton" << std::endl;
    std::cout << "10. Wolves" << std::endl;
    std::cout << "11. Newcastle" << std::endl;
    std::cout << "12. Crystal Palace" << std::endl;
    std::cout << "13. Brentford" << std::endl;
    std::cout << "14. Aston Villa" << std::endl;
    std::cout << "15. Southampton" << std::endl;
    std::cout << "16. Everton" << std::endl;
    std::cout << "17. Leeds" << std::endl;
    std::cout << "18. Burnley" << std::endl;
    std::cout << "19. Norwich" << std::endl;
    std::cout << "20. Watford" << std::endl;
    std::cout << "-----------------------------------------------------------------\n";
}

int PlayerInTeam(std::vector<Football_Player> team, Football_Player football_player)
{
    int cnt = count(team.begin(), team.end(), football_player);
    if (cnt == 0)
        return false;
    return true;
};

void Choose_Goalkeeper(Team &team, std::vector<Football_Player> &players, int &balance, int &teamvalue, int &teamoverall, bool &ok2)
{
    std::string key;
    bool ok = false;
    while (!ok)
    {
        std::cout << "Select which goalkeeper you want to add to your team: " << std::endl;
        usleep(1000000);
        std::cout << "-----------------------------------------------------------------\n";
        for (int i = 0; i < team.get_goalkeepers().size(); i++)
            if (team.get_goalkeepers()[i].getName() != "")
                std::cout << i + 1 << ". " << team.get_goalkeepers()[i].getName() << " " << team.get_goalkeepers()[i].getSecond_Name() << ", OVR: " << team.get_goalkeepers()[i].getOverall() << ", price: " << team.get_goalkeepers()[i].getPrice() << std::endl;
            else
                std::cout << i + 1 << ". " << team.get_goalkeepers()[i].getSecond_Name() << ", OVR: " << team.get_goalkeepers()[i].getOverall() << ", price: " << team.get_goalkeepers()[i].getPrice() << std::endl;
        std::cout << "-----------------------------------------------------------------\n";
        std::cin >> key;
        usleep(1000000);
        if (isNumber(key) == true)
        {
            int keynumber = stoll(key);
            if (keynumber >= 1 && keynumber <= team.get_goalkeepers().size())
            {
                char yes_or_no;
                if (team.get_goalkeepers()[keynumber - 1].getName() != "")
                    std::cout << "You've chosen " << team.get_goalkeepers()[keynumber - 1].getName() << " " << team.get_goalkeepers()[keynumber - 1].getSecond_Name() << ", " << team.get_goalkeepers()[keynumber - 1].getOverall() << std::endl;
                else
                    std::cout << "You've chosen " << team.get_goalkeepers()[keynumber - 1].getSecond_Name() << ", " << team.get_goalkeepers()[keynumber - 1].getOverall() << std::endl;
                std::cout << "Price: " << team.get_goalkeepers()[keynumber - 1].getPrice() << std::endl;
                std::cout << "Are you sure? (y/n) ";
                std::cin >> yes_or_no;
                usleep(1000000);
                if (tolower(yes_or_no) == 'y')
                    if (balance >= team.get_goalkeepers()[keynumber - 1].getPrice())
                    {
                        ok = true;
                        ok2 = true;
                        balance -= team.get_goalkeepers()[keynumber - 1].getPrice();
                        teamvalue += team.get_goalkeepers()[keynumber - 1].getPrice();
                        teamoverall += team.get_goalkeepers()[keynumber - 1].getOverall();
                        players.push_back(team.get_goalkeepers()[keynumber - 1]);
                        std::cout << "Remaining balance: " << balance << std::endl;
                        usleep(2000000);
                        break;
                    }
                    else
                    {
                        std::cout << "You don't have enough FUT Coins to buy this player.\nDon't worry though. We've got you covered. +500000 coins for playing our game. :)";
                        balance += 500000;
                    }
                else if (tolower(yes_or_no) == 'n')
                {
                    std::cout << "If you want to choose another team, let us know. (y/n)" << std::endl;
                    char yes_or_no2;
                    std::cin >> yes_or_no2;
                    usleep(1000000);
                    if (yes_or_no2 == 'y')
                    {
                        ok = true;
                        ok2 = false;
                    }
                    else if (yes_or_no2 == 'n')
                    {
                        std::cout << "Let's choose again, then." << std::endl;
                    }
                }
            }
            else
                std::cout << "You have to choose a number between " << 1 << " and " << team.get_goalkeepers().size() << ". Try again." << std::endl;
        }
        else
        {
            std::cout << key << " is not a number. Try again." << std::endl;
        }
    }
}

void Choose_Defender(Team &team, std::vector<Football_Player> &players, int &balance, int &teamvalue, int &teamoverall, bool &ok2)
{
    std::string key;
    bool ok = false;
    while (!ok)
    {
        std::cout << "Select which defender you want to add to your team: " << std::endl;
        usleep(1000000);
        std::cout << "-----------------------------------------------------------------\n";
        for (size_t i = 0; i < team.get_defenders().size(); i++)
            if (team.get_defenders()[i].getName() != "")
                std::cout << i + 1 << ". " << team.get_defenders()[i].getName() << " " << team.get_defenders()[i].getSecond_Name() << ", OVR: " << team.get_defenders()[i].getOverall() << ", price: " << team.get_defenders()[i].getPrice() << std::endl;
            else
                std::cout << i + 1 << ". " << team.get_defenders()[i].getSecond_Name() << ", OVR: " << team.get_defenders()[i].getOverall() << ", price: " << team.get_defenders()[i].getPrice() << std::endl;
        std::cout << "-----------------------------------------------------------------\n";
        std::cin >> key;
        usleep(1000000);
        if (isNumber(key) == true)
        {
            size_t keynumber = stoll(key);
            if (keynumber >= 1 && keynumber <= team.get_defenders().size())
                if (!PlayerInTeam(players, team.get_defenders()[keynumber - 1]))
                {
                    char yes_or_no;
                    if (team.get_defenders()[keynumber - 1].getName() != "")
                        std::cout << "You've chosen " << team.get_defenders()[keynumber - 1].getName() << " " << team.get_defenders()[keynumber - 1].getSecond_Name() << ", " << team.get_defenders()[keynumber - 1].getOverall() << std::endl;
                    else
                        std::cout << "You've chosen " << team.get_defenders()[keynumber - 1].getSecond_Name() << ", " << team.get_defenders()[keynumber - 1].getOverall() << std::endl;
                    std::cout << "Price: " << team.get_defenders()[keynumber - 1].getPrice() << std::endl;
                    std::cout << "Are you sure? (y/n) ";
                    std::cin >> yes_or_no;
                    usleep(1000000);
                    if (tolower(yes_or_no) == 'y')
                        if (balance >= team.get_defenders()[keynumber - 1].getPrice())
                        {
                            ok = true;
                            ok2 = true;
                            balance -= team.get_defenders()[keynumber - 1].getPrice();
                            teamvalue += team.get_defenders()[keynumber - 1].getPrice();
                            teamoverall += team.get_defenders()[keynumber - 1].getOverall();
                            players.push_back(team.get_defenders()[keynumber - 1]);
                            std::cout << "Remaining balance: " << balance << std::endl;
                            usleep(2000000);
                            break;
                        }
                        else
                        {
                            std::cout << "You don't have enough FUT Coins to buy this player.\nDon't worry though. We've got you covered. +500000 coins for playing our game. :)";
                            balance += 500000;
                        }
                    else if (tolower(yes_or_no) == 'n')
                    {
                        std::cout << "If you want to choose another team, let us know. (y/n)" << std::endl;
                        char yes_or_no2;
                        std::cin >> yes_or_no2;
                        usleep(1000000);
                        if (yes_or_no2 == 'y')
                        {
                            ok = true;
                            ok2 = false;
                        }
                        else if (yes_or_no2 == 'n')
                        {
                            std::cout << "Let's choose again, then." << std::endl;
                        }
                    }
                }
                else
                    std::cout << "This player is already in your team. Choose another one." << std::endl;
            else
                std::cout << "You have to choose a number between " << 1 << " and " << team.get_defenders().size() << ". Try again." << std::endl;
        }
        else
        {
            std::cout << key << " is not a number. Try again." << std::endl;
        }
    }
}

void Choose_Midfielder(Team &team, std::vector<Football_Player> &players, int &balance, int &teamvalue, int &teamoverall, bool &ok2)
{
    std::string key;
    bool ok = false;
    while (!ok)
    {
        std::cout << "Select which midfielder you want to add to your team: " << std::endl;
        usleep(1000000);
        std::cout << "-----------------------------------------------------------------\n";
        for (int i = 0; i < team.get_midfielders().size(); i++)
            if (team.get_midfielders()[i].getName() != "")
                std::cout << i + 1 << ". " << team.get_midfielders()[i].getName() << " " << team.get_midfielders()[i].getSecond_Name() << ", OVR: " << team.get_midfielders()[i].getOverall() << ", price: " << team.get_midfielders()[i].getPrice() << std::endl;
            else
                std::cout << i + 1 << ". " << team.get_midfielders()[i].getSecond_Name() << ", OVR: " << team.get_midfielders()[i].getOverall() << ", price: " << team.get_midfielders()[i].getPrice() << std::endl;
        std::cout << "-----------------------------------------------------------------\n";
        std::cin >> key;
        usleep(1000000);
        if (isNumber(key) == true)
        {
            int keynumber = stoll(key);
            if (keynumber >= 1 && keynumber <= team.get_midfielders().size())
                if (!PlayerInTeam(players, team.get_midfielders()[keynumber - 1]))
                {
                    char yes_or_no;
                    if (team.get_midfielders()[keynumber - 1].getName() != "")
                        std::cout << "You've chosen " << team.get_midfielders()[keynumber - 1].getName() << " " << team.get_midfielders()[keynumber - 1].getSecond_Name() << ", " << team.get_midfielders()[keynumber - 1].getOverall() << std::endl;
                    else
                        std::cout << "You've chosen " << team.get_midfielders()[keynumber - 1].getSecond_Name() << ", " << team.get_midfielders()[keynumber - 1].getOverall() << std::endl;
                    std::cout << "Price: " << team.get_midfielders()[keynumber - 1].getPrice() << std::endl;
                    std::cout << "Are you sure? (y/n) ";
                    std::cin >> yes_or_no;
                    usleep(1000000);
                    if (tolower(yes_or_no) == 'y')
                        if (balance >= team.get_midfielders()[keynumber - 1].getPrice())
                        {
                            ok = true;
                            ok2 = true;
                            balance -= team.get_midfielders()[keynumber - 1].getPrice();
                            teamvalue += team.get_midfielders()[keynumber - 1].getPrice();
                            teamoverall += team.get_midfielders()[keynumber - 1].getOverall();
                            players.push_back(team.get_midfielders()[keynumber - 1]);
                            std::cout << "Remaining balance: " << balance << std::endl;
                            usleep(2000000);
                            break;
                        }
                        else
                        {
                            std::cout << "You don't have enough FUT Coins to buy this player.\nDon't worry though. We've got you covered. +500000 coins for playing our game. :)";
                            balance += 500000;
                        }
                    else if (tolower(yes_or_no) == 'n')
                    {
                        std::cout << "If you want to choose another team, let us know. (y/n)" << std::endl;
                        char yes_or_no2;
                        std::cin >> yes_or_no2;
                        usleep(1000000);
                        if (yes_or_no2 == 'y')
                        {
                            ok = true;
                            ok2 = false;
                        }
                        else if (yes_or_no2 == 'n')
                        {
                            std::cout << "Let's choose again, then." << std::endl;
                        }
                    }
                }
                else
                    std::cout << "This player is already in your team. Choose another one." << std::endl;
            else
                std::cout << "You have to choose a number between " << 1 << " and " << team.get_midfielders().size() << ". Try again." << std::endl;
        }
        else
        {
            std::cout << key << " is not a number. Try again." << std::endl;
        }
    }
}

void Choose_Attacker(Team &team, std::vector<Football_Player> &players, int &balance, int &teamvalue, int &teamoverall, bool &ok2)
{
    std::string key;
    bool ok = false;
    while (!ok)
    {
        std::cout << "Select which attacker you want to add to your team: " << std::endl;
        usleep(1000000);
        std::cout << "-----------------------------------------------------------------\n";
        for (int i = 0; i < team.get_attackers().size(); i++)
            if (team.get_attackers()[i].getName() != "")
                std::cout << i + 1 << ". " << team.get_attackers()[i].getName() << " " << team.get_attackers()[i].getSecond_Name() << ", OVR: " << team.get_attackers()[i].getOverall() << ", price: " << team.get_attackers()[i].getPrice() << std::endl;
            else
                std::cout << i + 1 << ". " << team.get_attackers()[i].getSecond_Name() << ", OVR: " << team.get_attackers()[i].getOverall() << ", price: " << team.get_attackers()[i].getPrice() << std::endl;
        std::cout << "-----------------------------------------------------------------\n";
        std::cin >> key;
        usleep(1000000);
        if (isNumber(key) == true)
        {
            int keynumber = stoll(key);
            if (keynumber >= 1 && keynumber <= team.get_attackers().size())
                if (!PlayerInTeam(players, team.get_attackers()[keynumber - 1]))
                {
                    char yes_or_no;
                    if (team.get_attackers()[keynumber - 1].getName() != "")
                        std::cout << "You've chosen " << team.get_attackers()[keynumber - 1].getName() << " " << team.get_attackers()[keynumber - 1].getSecond_Name() << ", " << team.get_attackers()[keynumber - 1].getOverall() << std::endl;
                    else
                        std::cout << "You've chosen " << team.get_attackers()[keynumber - 1].getSecond_Name() << ", " << team.get_attackers()[keynumber - 1].getOverall() << std::endl;
                    std::cout << "Price: " << team.get_attackers()[keynumber - 1].getPrice() << std::endl;
                    std::cout << "Are you sure? (y/n) ";
                    std::cin >> yes_or_no;
                    usleep(1000000);
                    if (tolower(yes_or_no) == 'y')
                        if (balance >= team.get_attackers()[keynumber - 1].getPrice())
                        {
                            ok = true;
                            ok2 = true;
                            balance -= team.get_attackers()[keynumber - 1].getPrice();
                            teamvalue += team.get_attackers()[keynumber - 1].getPrice();
                            teamoverall += team.get_attackers()[keynumber - 1].getOverall();
                            players.push_back(team.get_attackers()[keynumber - 1]);
                            std::cout << "Remaining balance: " << balance << std::endl;
                            usleep(2000000);
                            break;
                        }
                        else
                        {
                            std::cout << "You don't have enough FUT Coins to buy this player.\nDon't worry though. We've got you covered. +500000 coins for playing our game. :)";
                            balance += 500000;
                        }

                    else if (tolower(yes_or_no) == 'n')
                    {
                        std::cout << "If you want to choose another team, let us know. (y/n)" << std::endl;
                        char yes_or_no2;
                        std::cin >> yes_or_no2;
                        usleep(1000000);
                        if (yes_or_no2 == 'y')
                        {
                            ok = true;
                            ok2 = false;
                        }
                        else if (yes_or_no2 == 'n')
                        {
                            std::cout << "Let's choose again, then." << std::endl;
                        }
                    }
                }
                else
                    std::cout << "This player is already in your team. Choose another one." << std::endl;
            else
                std::cout << "You have to choose a number between " << 1 << " and " << team.get_attackers().size() << ". Try again." << std::endl;
        }
        else
        {
            std::cout << key << " is not a number. Try again." << std::endl;
        }
    }
}
void Exhibition(std::vector<Football_Player> your_team, int your_team_overall, std::vector<Team> premier_league_teams)
{
    std::string team_name;
    int cnt = 1;
    int your_team_wins = 0, your_team_losses = 0, your_team_draws = 0;
    std::vector<std::string> wins = {
        "1-0", "2-0", "2-1", "3-0", "3-1", "3-2",
        "4-0", "4-1", "4-2", "4-3", "5-0", "5-1", "5-2", "5-3", "5-4"};

    std::vector<std::string> draws = {
        "0-0", "1-1", "2-2", "3-3", "4-4"};

    std::vector<std::string> losses = {
        "0-1", "0-2", "1-2", "0-3", "1-3", "2-3",
        "0-4", "1-4", "2-4", "3-4", "0-5", "1-5", "2-5", "3-5", "4-5"};

    std::cout << "First of all, we need to give your team a name: ";
    std::cin.ignore();
    std::getline(std::cin, team_name);
    usleep(1500000);
    std::cout << "-----------------------------------------------------------------\n";
    for (auto &premier_league_team : premier_league_teams)
    {
        srand(time(NULL));
        int probability;
        std::cout << "Match number " << cnt << ": " << team_name << " - " << premier_league_team.get_team_name() << std::endl;
        cnt++;
        usleep(2000000);
        probability = rand() % 99 + 1;
        if (probability <= 33)
        {
            auto it = wins.begin();
            int jmp = rand() % 15;
            std::advance(it, jmp);
            std::cout << "Full time: " << team_name << " " << *it << " " << premier_league_team.get_team_name() << std::endl;
            std::cout << "-----------------------------------------------------------------\n";
            usleep(2000000);
            your_team_wins++;
        }
        else if (probability <= 66)
        {
            auto it = draws.begin();
            int jmp = rand() % 5;
            std::advance(it, jmp);
            std::cout << "Full time: " << team_name << " " << *it << " " << premier_league_team.get_team_name() << std::endl;
            std::cout << "-----------------------------------------------------------------\n";
            usleep(2000000);
            your_team_draws++;
        }
        else
        {
            auto it = losses.begin();
            int jmp = rand() % 15;
            std::advance(it, jmp);
            std::cout << "Full time: " << team_name << " " << *it << " " << premier_league_team.get_team_name() << std::endl;
            std::cout << "-----------------------------------------------------------------\n";
            usleep(2000000);
            your_team_losses++;
        }
    }
    std::cout << "Your team has " << your_team_wins << " wins, " << your_team_draws << " draws and " << your_team_losses << " losses. Thanks for playing!\n";
    std::cout << "https://github.com/tudoriordache2004";
};
#endif