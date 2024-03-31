#include <iostream>
#include <vector>
#include <cstring>
#include <conio.h>
#include <unistd.h>

class FUT_Player
{
private:
    std::string Player_Username;
    std::string Player_Password;
    int Balance;

public:
    FUT_Player(std::string Player_Username, std::string Player_Password, int Balance)
    {
        this->Player_Username = Player_Username;
        this->Player_Password = Player_Password;
        this->Balance = Balance;
    }

    // constr de copiere
    FUT_Player(const FUT_Player &other)
    {
        this->Player_Username = other.Player_Username;
        this->Player_Password = other.Player_Password;
        this->Balance = other.Balance;
    }

    // operator egal
    FUT_Player &operator=(const FUT_Player &other)
    {
        if (this == &other)
            return *this;
        this->Player_Username = Player_Username;
        this->Player_Password = Player_Password;
        this->Balance = Balance;
        return *this;
    }

    std::string getUsername(void) const;
    std::string getPassword(void) const;
    int getBalance(void);
};

std::string FUT_Player::getUsername(void) const { return Player_Username; }
std::string FUT_Player::getPassword(void) const { return Player_Password; }
int FUT_Player::getBalance(void) { return Balance; }

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
    Football_Player(std::string Player_Second_Name, std::string Player_Name, std::string team_name, std::string Nationality, std::string Position, int Overall, int Price)
    {
        this->Player_Name = Player_Name;
        this->Player_Second_Name = Player_Second_Name;
        this->team_name = team_name;
        this->Nationality = Nationality;
        this->Position = Position;
        this->Overall = Overall;
        this->Price = Price;
    }
    std::string getName(void) const;
    std::string getSecond_Name(void) const;
    std::string getTeam_name(void) const;
    std::string getNationality(void) const;
    std::string getPosition(void) const;
    int getOverall(void) const;
    int getPrice(void) const;
};

std::string Football_Player::getName(void) const { return Player_Name; }
std::string Football_Player::getSecond_Name(void) const { return Player_Second_Name; }
std::string Football_Player::getTeam_name(void) const { return team_name; }
std::string Football_Player::getNationality(void) const { return Nationality; }
std::string Football_Player::getPosition(void) const { return Position; }
int Football_Player::getOverall(void) const { return Overall; }
int Football_Player::getPrice(void) const { return Price; }

class Team
{
private:
    std::string team_name;
    std::string country;
    std::vector<Football_Player> team_players;

public:
    std::string getcountry(void)
    {
        return country;
    }
    std::string get_team_name(void)
    {
        return team_name;
    }
    std::vector<Football_Player> get_team_players()
    {
        return team_players;
    };
    Team(std::string team_name, std::string country, std::vector<Football_Player> team_players)
    {
        this->team_name = team_name;
        this->country = country;
        this->team_players = team_players;
    }
};

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
}

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
}

int main()
{
    std::string username;
    std::string password;
    std::vector<FUT_Player> players;
    std::string player_name;
    int Balance;
    char ch; // parola in ********
    // pana aici am avut sectiunea user-ului

    int fundasi = -1;
    int mijlocasi = -1;
    int atacanti = -1;

    // pentru alegerea formatiei

    std::string key;

    // lista cu echipe
    std::vector<Football_Player> football_players;
    std::vector<Team> football_teams;
    /*    std::string Player_Name;
    std::string Player_Second_Name;
    std::string team_name;
    std::string Nationality;
    std::string Position;
    int Overall;
    int Price;*/

    std::vector<Football_Player> fut_player_football_players = {};

    Football_Player Vicario("Vicario", "Guiglelmo", "Tottenham", "Italy", "GK", 84, 15000);
    Football_Player Udogie("Udogie", "Destiny", "Tottenham", "Italy", "DEF", 81, 12000);
    Football_Player VandeVen("Van de Ven", "Micky", "Tottenham", "Netherlands", "DEF", 79, 7500);
    Football_Player Romero("Romero", "Cristian", "Tottenham", "Argentina", "DEF", 84, 15500);
    Football_Player Porro("Porro", "Pedro", "Tottenham", "Spain", "DEF", 84, 22500);
    Football_Player Bentancur("Bentancur", "Rodrigo", "Tottenham", "Uruguay", "MID", 80, 7500);
    Football_Player Sarr("Sarr", "Pape-Matar", "Tottenham", "Senegal", "MID", 75, 1500);
    Football_Player Maddison("Maddison", "James", "Tottenham", "England", "MID", 86, 45000);
    Football_Player Son("Son", "Heung-Min", "Tottenham", "South Korea", "ATT", 88, 83250);
    Football_Player Richarlison("Richarlison", "Tottenham", "Andrade", "Brazil", "ATT", 80, 7250);
    Football_Player Kulusevski("Kulusevski", "Dejan", "Tottenham", "Sweden", "ATT", 83, 9450);

    football_players.push_back(Vicario);
    football_players.push_back(Udogie);
    football_players.push_back(VandeVen);
    football_players.push_back(Romero);
    football_players.push_back(Porro);
    football_players.push_back(Sarr);
    football_players.push_back(Bentancur);
    football_players.push_back(Maddison);
    football_players.push_back(Son);
    football_players.push_back(Richarlison);
    football_players.push_back(Kulusevski);

    Team Tottenham("Tottenham", "England", football_players);

    football_players = {};

    Football_Player Ederson("Ederson", "", "Manchester City", "Brazil", "GK", 88, 58000);
    Football_Player Walker("Walker", "Kyle", "Manchester City", "England", "DEF", 85, 45000);
    Football_Player Dias("Dias", "Ruben", "Manchester City", "Portugal", "DEF", 87, 50000);
    Football_Player Stones("Stones", "John", "Manchester City", "England", "DEF", 85, 38000);
    Football_Player Cancelo("Cancelo", "Joao", "Manchester City", "Portugal", "DEF", 84, 42000);
    Football_Player Rodri("Rodri", "", "Manchester City", "Spain", "MID", 86, 48000);
    Football_Player DeBruyne("De Bruyne", "Kevin", "Manchester City", "Belgium", "MID", 89, 65000);
    Football_Player Gundogan("Gundogan", "Ilkay", "Manchester City", "Germany", "MID", 86, 52000);
    Football_Player Mahrez("Mahrez", "Riyad", "Manchester City", "Algeria", "ATT", 85, 47000);
    Football_Player Foden("Foden", "Phil", "Manchester City", "England", "ATT", 84, 49000);
    Football_Player Jesus("Jesus", "Gabriel", "Manchester City", "Brazil", "ATT", 84, 49000);

    football_players.push_back(Ederson);
    football_players.push_back(Walker);
    football_players.push_back(Dias);
    football_players.push_back(Stones);
    football_players.push_back(Cancelo);
    football_players.push_back(Rodri);
    football_players.push_back(DeBruyne);
    football_players.push_back(Gundogan);
    football_players.push_back(Mahrez);
    football_players.push_back(Foden);
    football_players.push_back(Jesus);

    Team ManchesterCity("Manchester City", "England", football_players);

    football_players = {};

    Football_Player Mendy("Mendy", "Edouard", "football_players", "Senegal", "GK", 85, 32000);
    Football_Player James("James", "Reece", "football_players", "England", "DEF", 84, 28000);
    Football_Player Silva("Silva", "Thiago", "football_players", "Brazil", "DEF", 86, 37000);
    Football_Player Rudiger("Rudiger", "Antonio", "football_players", "Germany", "DEF", 84, 32000);
    Football_Player Chilwell("Chilwell", "Ben", "football_players", "England", "DEF", 83, 31000);
    Football_Player Kante("Kante", "N'Golo", "football_players", "France", "MID", 88, 48000);
    Football_Player Jorginho("Jorginho", "\0", "football_players", "Italy", "MID", 84, 32000);
    Football_Player Mount("Mount", "Mason", "football_players", "England", "MID", 85, 38000);
    Football_Player Havertz("Havertz", "Kai", "football_players", "Germany", "MID", 85, 41000);
    Football_Player Werner("Werner", "Timo", "football_players", "Germany", "ATT", 83, 34000);
    Football_Player Lukaku("Lukaku", "Romelu", "football_players", "Belgium", "ATT", 88, 55000);

    football_players.push_back(Mendy);
    football_players.push_back(James);
    football_players.push_back(Silva);
    football_players.push_back(Rudiger);
    football_players.push_back(Chilwell);
    football_players.push_back(Kante);
    football_players.push_back(Jorginho);
    football_players.push_back(Mount);
    football_players.push_back(Havertz);
    football_players.push_back(Werner);
    football_players.push_back(Lukaku);

    Team Chelsea("Chelsea", "England", football_players);

    football_players = {};

    Football_Player DeGea("De Gea", "David", "Manchester United", "Spain", "GK", 87, 55000);
    Football_Player WanBissaka("Wan-Bissaka", "Aaron", "Manchester United", "England", "DEF", 82, 32000);
    Football_Player Maguire("Maguire", "Harry", "Manchester United", "England", "DEF", 84, 40000);
    Football_Player Varane("Varane", "Raphael", "Manchester United", "France", "DEF", 86, 50000);
    Football_Player Shaw("Shaw", "Luke", "England", "Manchester United", "DEF", 83, 35000);
    Football_Player McTominay("McTominay", "Scott", "Manchester United", "Scotland", "MID", 81, 25000);
    Football_Player Fred("Fred", "", "Manchester United", "Brazil", "MID", 82, 28000);
    Football_Player Pogba("Pogba", "Paul", "Manchester United", "France", "MID", 87, 60000);
    Football_Player Fernandes("Fernandes", "Bruno", "Manchester United", "Portugal", "MID", 88, 62000);
    Football_Player Rashford("Rashford", "Marcus", "Manchester United", "England", "ATT", 85, 48000);
    Football_Player Ronaldo("Ronaldo", "Cristiano", "Manchester United", "Portugal", "ATT", 89, 70000);

    football_players.push_back(DeGea);
    football_players.push_back(WanBissaka);
    football_players.push_back(Maguire);
    football_players.push_back(Varane);
    football_players.push_back(Shaw);
    football_players.push_back(McTominay);
    football_players.push_back(Fred);
    football_players.push_back(Pogba);
    football_players.push_back(Fernandes);
    football_players.push_back(Rashford);
    football_players.push_back(Ronaldo);

    Team ManchesterUnited("Manchester United", "England", football_players);

    football_players = {};

    Football_Player Alisson("Alisson", "", "Liverpool", "Brazil", "GK", 88, 55000);
    Football_Player AlexanderArnold("Alexander-Arnold", "Trent", "Liverpool", "England", "DEF", 87, 50000);
    Football_Player VanDijk("Van Dijk", "Virgil", "Liverpool", "Netherlands", "DEF", 90, 60000);
    Football_Player Matip("Matip", "Joel", "Liverpool", "Cameroon", "DEF", 85, 45000);
    Football_Player Robertson("Robertson", "Andrew", "Liverpool", "Scotland", "DEF", 87, 50000);
    Football_Player Fabinho("Fabinho", "", "Liverpool", "Brazil", "MID", 86, 52000);
    Football_Player Henderson("Henderson", "Jordan", "Liverpool", "England", "MID", 86, 52000);
    Football_Player Thiago("Thiago", "", "Liverpool", "Spain", "MID", 87, 53000);
    Football_Player Salah("Salah", "Mohamed", "Liverpool", "Egypt", "ATT", 90, 65000);
    Football_Player Firmino("Firmino", "Roberto", "Liverpool", "Brazil", "ATT", 88, 60000);
    Football_Player Mane("Mane", "Sadio", "Liverpool", "Senegal", "ATT", 89, 62000);

    football_players.push_back(Alisson);
    football_players.push_back(AlexanderArnold);
    football_players.push_back(VanDijk);
    football_players.push_back(Matip);
    football_players.push_back(Robertson);
    football_players.push_back(Fabinho);
    football_players.push_back(Henderson);
    football_players.push_back(Thiago);
    football_players.push_back(Salah);
    football_players.push_back(Firmino);
    football_players.push_back(Mane);

    Team Liverpool("Liverpool", "England", football_players);

    football_players = {};

    Football_Player Leno("Leno", "Bernd", "Arsenal", "Germany", "GK", 85, 50000);
    Football_Player Tierney("Tierney", "Kieran", "Arsenal", "Scotland", "DEF", 84, 45000);
    Football_Player White("White", "Ben", "Arsenal", "England", "DEF", 82, 42000);
    Football_Player Gabriel("Gabriel", "", "Arsenal", "Brazil", "DEF", 82, 40000);
    Football_Player Chambers("Chambers", "Calum", "Arsenal", "England", "DEF", 81, 38000);
    Football_Player Partey("Partey", "Thomas", "Arsenal", "Ghana", "MID", 85, 52000);
    Football_Player Xhaka("Xhaka", "Granit", "Arsenal", "Switzerland", "MID", 84, 48000);
    Football_Player Saka("Saka", "Bukayo", "Arsenal", "England", "ATT", 83, 47000);
    Football_Player Odegaard("Odegaard", "Martin", "Arsenal", "Norway", "MID", 84, 50000);
    Football_Player Pepe("Pepe", "Nicolas", "Arsenal", "Ivory Coast", "ATT", 85, 52000);
    Football_Player Aubameyang("Aubameyang", "Pierre-Emerick", "Arsenal", "Gabon", "ATT", 86, 55000);

    football_players.push_back(Leno);
    football_players.push_back(Tierney);
    football_players.push_back(White);
    football_players.push_back(Gabriel);
    football_players.push_back(Chambers);
    football_players.push_back(Partey);
    football_players.push_back(Xhaka);
    football_players.push_back(Saka);
    football_players.push_back(Odegaard);
    football_players.push_back(Pepe);
    football_players.push_back(Aubameyang);

    Team Arsenal("Arsenal", "England", football_players);

    football_players = {};

    Football_Player Schmeichel("Schmeichel", "Kasper", "Leicester City", "Denmark", "GK", 85, 45000);
    Football_Player Castagne("Castagne", "Timothy", "Leicester City", "Belgium", "DEF", 82, 38000);
    Football_Player Soyuncu("Soyuncu", "Caglar", "Leicester City", "Turkey", "DEF", 83, 42000);
    Football_Player Evans("Evans", "Jonny", "Leicester City", "Northern Ireland", "DEF", 82, 40000);
    Football_Player Thomas("Thomas", "Luke", "Leicester City", "England", "DEF", 80, 35000);
    Football_Player Ndidi("Ndidi", "Wilfred", "Leicester City", "Nigeria", "MID", 85, 48000);
    Football_Player Tielemans("Tielemans", "Youri", "Leicester City", "Belgium", "MID", 83, 44000);
    Football_Player Daka("Daka", "Patson", "Leicester City", "Zambia", "ATT", 80, 26000);
    Football_Player Perez("Perez", "Ayoze", "Leicester City", "Spain", "ATT", 82, 41000);
    Football_Player Vardy("Vardy", "Jamie", "Leicester City", "England", "ATT", 86, 52000);
    Football_Player Barnes("Barnes", "Harvey", "Leicester City", "England", "ATT", 81, 43000);

    football_players.push_back(Schmeichel);
    football_players.push_back(Castagne);
    football_players.push_back(Soyuncu);
    football_players.push_back(Evans);
    football_players.push_back(Thomas);
    football_players.push_back(Ndidi);
    football_players.push_back(Tielemans);
    football_players.push_back(Daka);
    football_players.push_back(Perez);
    football_players.push_back(Vardy);
    football_players.push_back(Barnes);

    Team Leicester("Leicester City", "England", football_players);

    football_players = {};

    Football_Player Fabianski("Fabianski", "Lukasz", "West Ham United", "Poland", "GK", 83, 37000);
    Football_Player Coufal("Coufal", "Vladimir", "West Ham United", "Czech Republic", "DEF", 81, 34000);
    Football_Player Dawson("Dawson", "Craig", "West Ham United", "England", "DEF", 80, 31000);
    Football_Player Ogbonna("Ogbonna", "Angelo", "West Ham United", "Italy", "DEF", 81, 33000);
    Football_Player Cresswell("Cresswell", "Aaron", "West Ham United", "England", "DEF", 81, 32000);
    Football_Player Rice("Rice", "Declan", "West Ham United", "England", "MID", 84, 41000);
    Football_Player Soucek("Soucek", "Tomas", "West Ham United", "Czech Republic", "MID", 82, 38000);
    Football_Player Bowen("Bowen", "Jarrod", "West Ham United", "England", "ATT", 81, 35000);
    Football_Player Benrahma("Benrahma", "Said", "West Ham United", "Algeria", "ATT", 80, 33000);
    Football_Player Antonio("Antonio", "Michail", "West Ham United", "England", "ATT", 82, 36000);
    Football_Player Lingard("Lingard", "Jesse", "West Ham United", "England", "MID", 81, 37000);

    football_players.push_back(Fabianski);
    football_players.push_back(Coufal);
    football_players.push_back(Dawson);
    football_players.push_back(Ogbonna);
    football_players.push_back(Cresswell);
    football_players.push_back(Rice);
    football_players.push_back(Soucek);
    football_players.push_back(Bowen);
    football_players.push_back(Benrahma);
    football_players.push_back(Antonio);
    football_players.push_back(Lingard);

    Team WestHam("West Ham United", "England", football_players);

    football_players = {};

    Football_Player Sanchez("Sanchez", "Robert", "Brighton & Hove Albion", "Spain", "GK", 81, 34000);
    Football_Player Veltman("Veltman", "Joel", "Brighton & Hove Albion", "Netherlands", "DEF", 79, 31000);
    Football_Player Dunk("Dunk", "Lewis", "Brighton & Hove Albion", "England", "DEF", 80, 32000);
    Football_Player Webster("Webster", "Adam", "Brighton & Hove Albion", "England", "DEF", 79, 30000);
    Football_Player Burn("Burn", "Dan", "Brighton & Hove Albion", "England", "DEF", 78, 29000);
    Football_Player Milner("Milner", "James", "Brighton & Hove Albion", "England", "MID", 81, 33000);
    Football_Player Lallana("Lallana", "Adam", "Brighton & Hove Albion", "England", "MID", 80, 31000);
    Football_Player Gross("Gross", "Pascal", "Brighton & Hove Albion", "Germany", "MID", 79, 30000);
    Football_Player Trossard("Trossard", "Leandro", "Brighton & Hove Albion", "Belgium", "ATT", 81, 34000);
    Football_Player Maupay("Maupay", "Neal", "Brighton & Hove Albion", "France", "ATT", 79, 32000);
    Football_Player Welbeck("Welbeck", "Danny", "Brighton & Hove Albion", "England", "ATT", 80, 33000);

    football_players.push_back(Sanchez);
    football_players.push_back(Veltman);
    football_players.push_back(Dunk);
    football_players.push_back(Webster);
    football_players.push_back(Burn);
    football_players.push_back(Milner);
    football_players.push_back(Lallana);
    football_players.push_back(Gross);
    football_players.push_back(Trossard);
    football_players.push_back(Maupay);
    football_players.push_back(Welbeck);

    Team Brighton("Brighton & Hove Albion", "England", football_players);

    football_players = {};

    Football_Player Sa("Sa", "Jose", "Wolverhampton Wanderers", "Portugal", "GK", 80, 32000);
    Football_Player Semedo("Semedo", "Nelson", "Wolverhampton Wanderers", "Portugal", "DEF", 80, 31000);
    Football_Player Coady("Coady", "Conor", "Wolverhampton Wanderers", "England", "DEF", 81, 33000);
    Football_Player Kilman("Kilman", "Max", "Wolverhampton Wanderers", "England", "DEF", 78, 30000);
    Football_Player AitNouri("Ait-Nouri", "Rayan", "Wolverhampton Wanderers", "France", "DEF", 78, 29000);
    Football_Player Neves("Neves", "Ruben", "Wolverhampton Wanderers", "Portugal", "MID", 82, 34000);
    Football_Player Moutinho("Moutinho", "Joao", "Wolverhampton Wanderers", "Portugal", "MID", 81, 33000);
    Football_Player Podence("Podence", "Daniel", "Wolverhampton Wanderers", "Portugal", "MID", 80, 32000);
    Football_Player Traore("Traore", "Adama", "Wolverhampton Wanderers", "Spain", "ATT", 81, 33000);
    Football_Player Jimenez("Jimenez", "Raul", "Wolverhampton Wanderers", "Mexico", "ATT", 83, 36000);
    Football_Player Neto("Neto", "Pedro", "Wolverhampton Wanderers", "Portugal", "ATT", 80, 31000);

    football_players.push_back(Sa);
    football_players.push_back(Semedo);
    football_players.push_back(Coady);
    football_players.push_back(Kilman);
    football_players.push_back(AitNouri);
    football_players.push_back(Neves);
    football_players.push_back(Moutinho);
    football_players.push_back(Podence);
    football_players.push_back(Traore);
    football_players.push_back(Jimenez);
    football_players.push_back(Neto);

    Team Wolves("Wolverhampton Wanderers", "England", football_players);

    football_players = {};

    Football_Player Dubravka("Dubravka", "Martin", "Newcastle United", "Slovakia", "GK", 81, 33000);
    Football_Player Manquillo("Manquillo", "Javier", "Newcastle United", "Spain", "DEF", 76, 29000);
    Football_Player Lascelles("Lascelles", "Jamaal", "Newcastle United", "England", "DEF", 78, 30000);
    Football_Player Clark("Clark", "Ciaran", "Newcastle United", "Ireland", "DEF", 77, 29000);
    Football_Player Lewis("Lewis", "Jamal", "Newcastle United", "England", "DEF", 76, 28000);
    Football_Player Hayden("Hayden", "Isaac", "Newcastle United", "England", "MID", 77, 29000);
    Football_Player Shelvey("Shelvey", "Jonjo", "Newcastle United", "England", "MID", 77, 30000);
    Football_Player Almiron("Almiron", "Miguel", "Newcastle United", "Paraguay", "MID", 79, 31000);
    Football_Player Willock("Willock", "Joe", "Newcastle United", "England", "MID", 76, 28000);
    Football_Player SaintMaximin("Saint-Maximin", "Allan", "Newcastle United", "France", "ATT", 80, 32000);
    Football_Player Wilson("Wilson", "Callum", "Newcastle United", "England", "ATT", 78, 31000);

    football_players.push_back(Dubravka);
    football_players.push_back(Manquillo);
    football_players.push_back(Lascelles);
    football_players.push_back(Clark);
    football_players.push_back(Lewis);
    football_players.push_back(Hayden);
    football_players.push_back(Shelvey);
    football_players.push_back(Almiron);
    football_players.push_back(Willock);
    football_players.push_back(SaintMaximin);
    football_players.push_back(Wilson);

    Team Newcastle("Newcastle United", "England", football_players);

    football_players = {};

    Football_Player Guaita("Guaita", "Vicente", "Crystal Palace", "Spain", "GK", 79, 32000);
    Football_Player Ward("Ward", "Joel", "Crystal Palace", "Wales", "DEF", 75, 27000);
    Football_Player Kouyate("Kouyate", "Cheikhou", "Crystal Palace", "Senegal", "DEF", 76, 28000);
    Football_Player Andersen("Andersen", "Joachim", "Crystal Palace", "Denmark", "DEF", 77, 29000);
    Football_Player Mitchell("Mitchell", "Tyrick", "Crystal Palace", "England", "DEF", 75, 27000);
    Football_Player Milivojevic("Milivojevic", "Luka", "Crystal Palace", "Serbia", "MID", 77, 28000);
    Football_Player Gallagher("Gallagher", "Conor", "Crystal Palace", "England", "MID", 76, 28000);
    Football_Player Eze("Eze", "Eberechi", "Crystal Palace", "England", "MID", 78, 30000);
    Football_Player Ayew("Ayew", "Jordan", "Crystal Palace", "Ghana", "ATT", 77, 29000);
    Football_Player Zaha("Zaha", "Wilfried", "Crystal Palace", "Ivory Coast", "ATT", 80, 31000);
    Football_Player Olise("Olise", "Michael", "Crystal Palace", "France", "ATT", 76, 28000);

    football_players.push_back(Guaita);
    football_players.push_back(Ward);
    football_players.push_back(Kouyate);
    football_players.push_back(Andersen);
    football_players.push_back(Mitchell);
    football_players.push_back(Milivojevic);
    football_players.push_back(Gallagher);
    football_players.push_back(Eze);
    football_players.push_back(Ayew);
    football_players.push_back(Zaha);
    football_players.push_back(Olise);

    Team CrystalPalace("Crystal Palace", "England", football_players);

    football_players = {};

    Football_Player Raya("Raya", "David", "Brentford", "Spain", "GK", 78, 30000);
    Football_Player Henry("Henry", "Rico", "Brentford", "England", "DEF", 76, 28000);
    Football_Player Jansson("Jansson", "Pontus", "Brentford", "Sweden", "DEF", 77, 29000);
    Football_Player Pinnock("Pinnock", "Ethan", "Brentford", "England", "DEF", 77, 29000);
    Football_Player Ajer("Ajer", "Kristoffer", "Brentford", "Norway", "DEF", 76, 28000);
    Football_Player Canos("Canos", "Sergi", "Brentford", "Spain", "ATT", 75, 27000);
    Football_Player Norgaard("Norgaard", "Christian", "Brentford", "Denmark", "MID", 76, 28000);
    Football_Player Jensen("Jensen", "Mathias", "Brentford", "Denmark", "MID", 76, 28000);
    Football_Player Janelt("Janelt", "Vitaly", "Brentford", "Germany", "MID", 75, 27000);
    Football_Player Toney("Toney", "Ivan", "Brentford", "England", "ATT", 78, 30000);
    Football_Player Mbeumo("Mbeumo", "Bryan", "Brentford", "France", "ATT", 76, 28000);

    football_players.push_back(Raya);
    football_players.push_back(Henry);
    football_players.push_back(Jansson);
    football_players.push_back(Pinnock);
    football_players.push_back(Ajer);
    football_players.push_back(Canos);
    football_players.push_back(Norgaard);
    football_players.push_back(Jensen);
    football_players.push_back(Janelt);
    football_players.push_back(Toney);
    football_players.push_back(Mbeumo);

    Team Brentford("Brentford", "England", football_players);

    football_players = {};

    Football_Player Martinez("Martinez", "Emiliano", "Aston Villa", "Argentina", "GK", 81, 33000);
    Football_Player Cash("Cash", "Matty", "Aston Villa", "England", "DEF", 76, 29000);
    Football_Player Konsa("Konsa", "Ezri", "Aston Villa", "England", "DEF", 77, 30000);
    Football_Player Mings("Mings", "Tyrone", "Aston Villa", "England", "DEF", 78, 31000);
    Football_Player Targett("Targett", "Matt", "Aston Villa", "England", "DEF", 76, 29000);
    Football_Player Luiz("Luiz", "Douglas", "Aston Villa", "Brazil", "MID", 78, 31000);
    Football_Player McGinn("McGinn", "John", "Aston Villa", "Scotland", "MID", 77, 30000);
    Football_Player Ramsey("Ramsey", "Jacob", "Aston Villa", "England", "MID", 75, 27000);
    Football_Player Buendia("Buendia", "Emiliano", "Aston Villa", "Argentina", "ATT", 79, 32000);
    Football_Player Bailey("Bailey", "Leon", "Aston Villa", "Jamaica", "ATT", 78, 31000);
    Football_Player Watkins("Watkins", "Ollie", "Aston Villa", "England", "ATT", 78, 31000);

    football_players.push_back(Martinez);
    football_players.push_back(Cash);
    football_players.push_back(Konsa);
    football_players.push_back(Mings);
    football_players.push_back(Targett);
    football_players.push_back(Luiz);
    football_players.push_back(McGinn);
    football_players.push_back(Ramsey);
    football_players.push_back(Buendia);
    football_players.push_back(Bailey);
    football_players.push_back(Watkins);

    Team AstonVilla("Aston Villa", "England", football_players);

    football_players = {};

    Football_Player McCarthy("McCarthy", "Alex", "Southampton", "Ireland", "GK", 76, 25000);
    Football_Player Livramento("Livramento", "Tino", "Southampton", "England", "DEF", 70, 20000);
    Football_Player Bednarek("Bednarek", "Jan", "Southampton", "Poland", "DEF", 75, 22000);
    Football_Player Salisu("Salisu", "Mohammed", "Southampton", "Ghana", "DEF", 73, 21000);
    Football_Player Perraud("Perraud", "Romain", "Southampton", "France", "DEF", 74, 23000);
    Football_Player Romeu("Romeu", "Oriol", "Southampton", "Spain", "MID", 77, 24000);
    Football_Player WardProwse("Ward-Prowse", "James", "Southampton", "England", "MID", 78, 26000);
    Football_Player Armstrong("Armstrong", "Stuart", "Southampton", "Scotland", "MID", 76, 25000);
    Football_Player Redmond("Redmond", "Nathan", "Southampton", "England", "ATT", 75, 24000);
    Football_Player Adams("Adams", "Che", "Southampton", "Scotland", "ATT", 76, 25000);
    Football_Player Tella("Tella", "Nathan", "Southampton", "England", "ATT", 72, 21000);

    football_players.push_back(McCarthy);
    football_players.push_back(Livramento);
    football_players.push_back(Bednarek);
    football_players.push_back(Salisu);
    football_players.push_back(Perraud);
    football_players.push_back(Romeu);
    football_players.push_back(WardProwse);
    football_players.push_back(Armstrong);
    football_players.push_back(Redmond);
    football_players.push_back(Adams);
    football_players.push_back(Tella);

    Team Southampton("Southampton", "England", football_players);

    football_players = {};

    Football_Player Pickford("Pickford", "Jordan", "Everton", "England", "GK", 82, 35000);
    Football_Player Coleman("Coleman", "Seamus", "Everton", "Ireland", "DEF", 79, 28000);
    Football_Player Mina("Mina", "Yerry", "Everton", "Colombia", "DEF", 80, 32000);
    Football_Player Keane("Keane", "Michael", "Everton", "England", "DEF", 81, 33000);
    Football_Player Digne("Digne", "Lucas", "Everton", "France", "DEF", 82, 34000);
    Football_Player Allan("Allan", "", "Everton", "Brazil", "MID", 83, 36000);
    Football_Player Doucoure("Doucoure", "Abdoulaye", "Everton", "France", "MID", 82, 33000);
    Football_Player Rodriguez("Rodriguez", "James", "Everton", "Colombia", "MID", 83, 38000);
    Football_Player Danjuma("Danjuma", "Arnaut", "Everton", "Netherlands", "ATT", 81, 20000);
    Football_Player Gray("Gray", "Demarai", "Everton", "England", "ATT", 80, 32000);
    Football_Player CalvertLewin("Calvert-Lewin", "Dominic", "Everton", "England", "ATT", 83, 38000);

    football_players.push_back(Pickford);
    football_players.push_back(Coleman);
    football_players.push_back(Mina);
    football_players.push_back(Keane);
    football_players.push_back(Digne);
    football_players.push_back(Allan);
    football_players.push_back(Doucoure);
    football_players.push_back(Rodriguez);
    football_players.push_back(Danjuma);
    football_players.push_back(Gray);
    football_players.push_back(CalvertLewin);

    Team Everton("Everton", "England", football_players);

    football_players = {};

    Football_Player Meslier("Meslier", "Illan", "Leeds United", "France", "GK", 78, 26000);
    Football_Player Ayling("Ayling", "Luke", "Leeds United", "England", "DEF", 76, 24000);
    Football_Player Koch("Koch", "Robin", "Leeds United", "Germany", "DEF", 77, 25000);
    Football_Player Struijk("Struijk", "Pascal", "Leeds United", "Netherlands", "DEF", 76, 24000);
    Football_Player Firpo("Firpo", "Junior", "Leeds United", "Spain", "DEF", 77, 25000);
    Football_Player Phillips("Phillips", "Kalvin", "Leeds United", "England", "MID", 79, 27000);
    Football_Player Dallas("Dallas", "Stuart", "Leeds United", "Northern Ireland", "MID", 77, 26000);
    Football_Player Raphinha("Raphinha", "", "Leeds United", "Brazil", "ATT", 81, 29000);
    Football_Player Rodrigo("Rodrigo", "", "Leeds United", "Spain", "ATT", 79, 28000);
    Football_Player Harrison("Harrison", "Jack", "Leeds United", "England", "ATT", 78, 27000);
    Football_Player Bamford("Bamford", "Patrick", "Leeds United", "England", "ATT", 79, 28000);

    football_players.push_back(Meslier);
    football_players.push_back(Ayling);
    football_players.push_back(Koch);
    football_players.push_back(Struijk);
    football_players.push_back(Firpo);
    football_players.push_back(Phillips);
    football_players.push_back(Dallas);
    football_players.push_back(Raphinha);
    football_players.push_back(Rodrigo);
    football_players.push_back(Harrison);
    football_players.push_back(Bamford);

    Team Leeds("Leeds United", "England", football_players);

    football_players = {};

    Football_Player Pope("Pope", "Nick", "Burnley", "England", "GK", 80, 31000);
    Football_Player Lowton("Lowton", "Matthew", "Burnley", "England", "DEF", 74, 22000);
    Football_Player Tarkowski("Tarkowski", "James", "Burnley", "England", "DEF", 77, 25000);
    Football_Player Mee("Mee", "Ben", "Burnley", "England", "DEF", 76, 24000);
    Football_Player Taylor("Taylor", "Charlie", "Burnley", "England", "DEF", 75, 23000);
    Football_Player Brownhill("Brownhill", "Josh", "Burnley", "England", "MID", 76, 24000);
    Football_Player Westwood("Westwood", "Ashley", "Burnley", "England", "MID", 76, 24000);
    Football_Player McNeil("McNeil", "Dwight", "Burnley", "England", "ATT", 76, 24000);
    Football_Player Cornet("Cornet", "Maxwel", "Burnley", "Ivory Coast", "ATT", 77, 25000);
    Football_Player Lennon("Lennon", "Aaron", "Burnley", "England", "ATT", 74, 22000);
    Football_Player Wood("Wood", "Chris", "Burnley", "New Zealand", "ATT", 77, 25000);

    football_players.push_back(Pope);
    football_players.push_back(Lowton);
    football_players.push_back(Tarkowski);
    football_players.push_back(Mee);
    football_players.push_back(Taylor);
    football_players.push_back(Brownhill);
    football_players.push_back(Westwood);
    football_players.push_back(McNeil);
    football_players.push_back(Cornet);
    football_players.push_back(Lennon);
    football_players.push_back(Wood);

    Team Burnley("Burnley", "England", football_players);

    football_players = {};

    Football_Player Bachmann("Bachmann", "Daniel", "Watford", "Austria", "GK", 75, 22000);
    Football_Player Femenia("Femenia", "Kiko", "Watford", "Spain", "DEF", 74, 21000);
    Football_Player TroostEkong("Troost-Ekong", "William", "Watford", "Nigeria", "DEF", 76, 23000);
    Football_Player Cathcart("Cathcart", "Craig", "Watford", "Northern Ireland", "DEF", 75, 22000);
    Football_Player Masina("Masina", "Adam", "Watford", "Morocco", "DEF", 74, 21000);
    Football_Player Cleverley("Cleverley", "Tom", "Watford", "England", "MID", 75, 22000);
    Football_Player Louza("Louza", "Imran", "Watford", "Morocco", "MID", 74, 21000);
    Football_Player Sissoko("Sissoko", "Moussa", "Watford", "France", "MID", 77, 24000);
    Football_Player Sarr2("Sarr", "Ismaïla", "Watford", "Senegal", "ATT", 78, 25000);
    Football_Player Dennis("Dennis", "Emmanuel", "Watford", "Nigeria", "ATT", 77, 24000);
    Football_Player King("King", "Joshua", "Watford", "Norway", "ATT", 76, 23000);

    football_players.push_back(Bachmann);
    football_players.push_back(Femenia);
    football_players.push_back(TroostEkong);
    football_players.push_back(Cathcart);
    football_players.push_back(Masina);
    football_players.push_back(Cleverley);
    football_players.push_back(Louza);
    football_players.push_back(Sissoko);
    football_players.push_back(Sarr);
    football_players.push_back(Dennis);
    football_players.push_back(King);

    Team Watford("Watford", "England", football_players);

    football_players = {};

    Football_Player Krul("Krul", "Tim", "Norwich City", "Netherlands", "GK", 75, 22000);
    Football_Player Aarons("Aarons", "Max", "Norwich City", "England", "DEF", 73, 21000);
    Football_Player Hanley("Hanley", "Grant", "Norwich City", "Scotland", "DEF", 74, 22000);
    Football_Player Gibson("Gibson", "Ben", "Norwich City", "England", "DEF", 74, 22000);
    Football_Player Giannoulis("Giannoulis", "Dimitris", "Norwich City", "Greece", "DEF", 73, 21000);
    Football_Player Gilmour("Gilmour", "Billy", "Norwich City", "Scotland", "MID", 75, 23000);
    Football_Player McLean("McLean", "Kenny", "Norwich City", "Scotland", "MID", 74, 22000);
    Football_Player Cantwell("Cantwell", "Todd", "Norwich City", "England", "MID", 74, 22000);
    Football_Player Rashica("Rashica", "Milot", "Norwich City", "Kosovo", "ATT", 76, 24000);
    Football_Player Pukki("Pukki", "Teemu", "Norwich City", "Finland", "ATT", 76, 24000);
    Football_Player Idah("Idah", "Adam", "Norwich City", "Ireland", "ATT", 73, 21000);

    football_players.push_back(Krul);
    football_players.push_back(Aarons);
    football_players.push_back(Hanley);
    football_players.push_back(Gibson);
    football_players.push_back(Giannoulis);
    football_players.push_back(Gilmour);
    football_players.push_back(McLean);
    football_players.push_back(Cantwell);
    football_players.push_back(Rashica);
    football_players.push_back(Pukki);
    football_players.push_back(Idah);

    Team Norwich("Norwich City", "England", football_players);

    FUT_Player player1("Fabeez", "fabi2004", 1250000);
    players.push_back(player1);
    FUT_Player player2("Cedryk", "caras2004", 2750000);
    players.push_back(player2);
    FUT_Player player3("Cosmin", "cosmin2004", 1458900);
    players.push_back(player3);
    FUT_Player player4("Xmogdi", "mogda2004", 1734500);
    players.push_back(player4);
    FUT_Player player5("Ziuz", "vlad2004", 5763500);
    players.push_back(player5);

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
                    { // 13 is ASCII code for "Enter"
                        if (ch == 8)
                        { // 8 is ASCII code for "Backspace"
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
                    std::cout << std::endl;
                    if (player.getPassword() == password)
                    {
                        pass = true;
                        usn = true;
                        Balance = player.getBalance();
                        std::cout << "Your authentification was succesful, " << username << "!\n";
                        usleep(1000000);
                        std::cout << "Your balance is " << Balance << " coins" << std::endl;
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

    Choose_Formation(fundasi, mijlocasi, atacanti);

    char yes_or_no;
    bool ok = false, ok2 = false;
    int teamvalue = 0;
    int teamovr = 0;
    while (!ok)
    {
        std::cout << "Let's start with the goalkeeper. Select the team he's currently playing for: " << std::endl;
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
        std::cout << "19. Watford" << std::endl;
        std::cout << "20. Norwich" << std::endl;
        std::cin >> key;
        if (isNumber(key) == true)
            switch (stoi(key))
            {
            case (1):
            {
                for (const auto &player : Tottenham.get_team_players())
                    if (player.getPosition() == "GK")
                    {
                        std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                        std::cout << "Price: " << player.getPrice() << std::endl;
                        std::cout << "Are you sure? (y/n) ";
                        std::cin >> yes_or_no;
                        if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                        {
                            ok = true;
                            Balance -= player.getPrice();
                            teamvalue += player.getPrice();
                            teamovr += player.getOverall();
                            std::cout << "Remaining balance: " << Balance << std::endl;
                        }
                        else if (tolower(yes_or_no) == 'n')
                            std::cout << "Let's choose again, then." << std::endl;
                        else
                            std::cout << "You can't really do that :) Try again?" << std::endl;
                    }
                break;
            }
            case (2):
            {
                for (const auto &player : ManchesterCity.get_team_players())
                    if (player.getPosition() == "GK")
                    {
                        std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                        std::cout << "Price: " << player.getPrice() << std::endl;
                        std::cout << "Are you sure? (y/n) ";
                        std::cin >> yes_or_no;
                        if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                        {
                            ok = true;
                            Balance -= player.getPrice();
                            teamvalue += player.getPrice();
                            teamovr += player.getOverall();
                            std::cout << "Remaining balance: " << Balance << std::endl;
                        }
                        else if (tolower(yes_or_no) == 'n')
                            std::cout << "Let's choose again, then." << std::endl;
                        else
                            std::cout << "You can't really do that :) Try again?" << std::endl;
                    }
                break;
            }
            case (3):
            {
                for (const auto &player : Chelsea.get_team_players())
                    if (player.getPosition() == "GK")
                    {
                        std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                        std::cout << "Price: " << player.getPrice() << std::endl;
                        std::cout << "Are you sure? (y/n) ";
                        std::cin >> yes_or_no;
                        if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                        {
                            ok = true;
                            Balance -= player.getPrice();
                            teamvalue += player.getPrice();
                            teamovr += player.getOverall();
                            std::cout << "Remaining balance: " << Balance << std::endl;
                        }
                        else if (tolower(yes_or_no) == 'n')
                            std::cout << "Let's choose again, then." << std::endl;
                        else
                            std::cout << "You can't really do that :) Try again?" << std::endl;
                    }
                break;
            }
            case (4):
            {
                for (const auto &player : ManchesterUnited.get_team_players())
                    if (player.getPosition() == "GK")
                    {
                        std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                        std::cout << "Price: " << player.getPrice() << std::endl;
                        std::cout << "Are you sure? (y/n) ";
                        std::cin >> yes_or_no;
                        if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                        {
                            ok = true;
                            Balance -= player.getPrice();
                            teamvalue += player.getPrice();
                            teamovr += player.getOverall();
                            std::cout << "Remaining balance: " << Balance << std::endl;
                        }
                        else if (tolower(yes_or_no) == 'n')
                            std::cout << "Let's choose again, then." << std::endl;
                        else
                            std::cout << "You can't really do that :) Try again?" << std::endl;
                    }
                break;
            }
            case (5):
            {
                for (const auto &player : Liverpool.get_team_players())
                    if (player.getPosition() == "GK")
                    {
                        std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                        std::cout << "Price: " << player.getPrice() << std::endl;
                        std::cout << "Are you sure? (y/n) ";
                        std::cin >> yes_or_no;
                        if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                        {
                            ok = true;
                            Balance -= player.getPrice();
                            teamvalue += player.getPrice();
                            teamovr += player.getOverall();
                            std::cout << "Remaining balance: " << Balance << std::endl;
                        }
                        else if (tolower(yes_or_no) == 'n')
                            std::cout << "Let's choose again, then." << std::endl;
                        else
                            std::cout << "You can't really do that :) Try again?" << std::endl;
                    }
                break;
            }

            case (6):
            {
                for (const auto &player : Arsenal.get_team_players())
                    if (player.getPosition() == "GK")
                    {
                        std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                        std::cout << "Price: " << player.getPrice() << std::endl;
                        std::cout << "Are you sure? (y/n) ";
                        std::cin >> yes_or_no;
                        if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                        {
                            ok = true;
                            Balance -= player.getPrice();
                            teamvalue += player.getPrice();
                            teamovr += player.getOverall();
                            std::cout << "Remaining balance: " << Balance << std::endl;
                        }
                        else if (tolower(yes_or_no) == 'n')
                            std::cout << "Let's choose again, then." << std::endl;
                        else
                            std::cout << "You can't really do that :) Try again?" << std::endl;
                    }
                break;
            }
            case (7):
            {
                for (const auto &player : Leicester.get_team_players())
                    if (player.getPosition() == "GK")
                    {
                        std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                        std::cout << "Price: " << player.getPrice() << std::endl;
                        std::cout << "Are you sure? (y/n) ";
                        std::cin >> yes_or_no;
                        if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                        {
                            ok = true;
                            Balance -= player.getPrice();
                            teamvalue += player.getPrice();
                            teamovr += player.getOverall();
                            std::cout << "Remaining balance: " << Balance << std::endl;
                        }
                        else if (tolower(yes_or_no) == 'n')
                            std::cout << "Let's choose again, then." << std::endl;
                        else
                            std::cout << "You can't really do that :) Try again?" << std::endl;
                    }
                break;
            }
            case (8):
            {
                for (const auto &player : WestHam.get_team_players())
                    if (player.getPosition() == "GK")
                    {
                        std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                        std::cout << "Price: " << player.getPrice() << std::endl;
                        std::cout << "Are you sure? (y/n) ";
                        std::cin >> yes_or_no;
                        if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                        {
                            ok = true;
                            Balance -= player.getPrice();
                            teamvalue += player.getPrice();
                            teamovr += player.getOverall();
                            std::cout << "Remaining balance: " << Balance << std::endl;
                        }
                        else if (tolower(yes_or_no) == 'n')
                            std::cout << "Let's choose again, then." << std::endl;
                        else
                            std::cout << "You can't really do that :) Try again?" << std::endl;
                    }
                break;
            }
            case (9):
            {
                for (const auto &player : Brighton.get_team_players())
                    if (player.getPosition() == "GK")
                    {
                        std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                        std::cout << "Price: " << player.getPrice() << std::endl;
                        std::cout << "Are you sure? (y/n) ";
                        std::cin >> yes_or_no;
                        if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                        {
                            ok = true;
                            Balance -= player.getPrice();
                            teamvalue += player.getPrice();
                            teamovr += player.getOverall();
                            std::cout << "Remaining balance: " << Balance << std::endl;
                        }
                        else if (tolower(yes_or_no) == 'n')
                            std::cout << "Let's choose again, then." << std::endl;
                        else
                            std::cout << "You can't really do that :) Try again?" << std::endl;
                    }
                break;
            }
            case (10):
            {
                for (const auto &player : Wolves.get_team_players())
                    if (player.getPosition() == "GK")
                    {
                        std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                        std::cout << "Price: " << player.getPrice() << std::endl;
                        std::cout << "Are you sure? (y/n) ";
                        std::cin >> yes_or_no;
                        if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                        {
                            ok = true;
                            Balance -= player.getPrice();
                            teamvalue += player.getPrice();
                            teamovr += player.getOverall();
                            std::cout << "Remaining balance: " << Balance << std::endl;
                        }
                        else if (tolower(yes_or_no) == 'n')
                            std::cout << "Let's choose again, then." << std::endl;
                        else
                            std::cout << "You can't really do that :) Try again?" << std::endl;
                    }
                break;
            }
            case (11):
            {
                for (const auto &player : Newcastle.get_team_players())
                    if (player.getPosition() == "GK")
                    {
                        std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                        std::cout << "Price: " << player.getPrice() << std::endl;
                        std::cout << "Are you sure? (y/n) ";
                        std::cin >> yes_or_no;
                        if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                        {
                            ok = true;
                            Balance -= player.getPrice();
                            teamvalue += player.getPrice();
                            teamovr += player.getOverall();
                            std::cout << "Remaining balance: " << Balance << std::endl;
                        }
                        else if (tolower(yes_or_no) == 'n')
                            std::cout << "Let's choose again, then." << std::endl;
                        else
                            std::cout << "You can't really do that :) Try again?" << std::endl;
                    }
                break;
            }
            case (12):
            {
                for (const auto &player : CrystalPalace.get_team_players())
                    if (player.getPosition() == "GK")
                    {
                        std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                        std::cout << "Price: " << player.getPrice() << std::endl;
                        std::cout << "Are you sure? (y/n) ";
                        std::cin >> yes_or_no;
                        if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                        {
                            ok = true;
                            Balance -= player.getPrice();
                            teamvalue += player.getPrice();
                            teamovr += player.getOverall();
                            std::cout << "Remaining balance: " << Balance << std::endl;
                        }
                        else if (tolower(yes_or_no) == 'n')
                            std::cout << "Let's choose again, then." << std::endl;
                        else
                            std::cout << "You can't really do that :) Try again?" << std::endl;
                    }
                break;
            }
            case (13):
            {
                for (const auto &player : Brentford.get_team_players())
                    if (player.getPosition() == "GK")
                    {
                        std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                        std::cout << "Price: " << player.getPrice() << std::endl;
                        std::cout << "Are you sure? (y/n) ";
                        std::cin >> yes_or_no;
                        if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                        {
                            ok = true;
                            Balance -= player.getPrice();
                            teamvalue += player.getPrice();
                            teamovr += player.getOverall();
                            std::cout << "Remaining balance: " << Balance << std::endl;
                        }
                        else if (tolower(yes_or_no) == 'n')
                            std::cout << "Let's choose again, then." << std::endl;
                        else
                            std::cout << "You can't really do that :) Try again?" << std::endl;
                    }
                break;
            }
            case (14):
            {
                for (const auto &player : AstonVilla.get_team_players())
                    if (player.getPosition() == "GK")
                    {
                        std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                        std::cout << "Price: " << player.getPrice() << std::endl;
                        std::cout << "Are you sure? (y/n) ";
                        std::cin >> yes_or_no;
                        if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                        {
                            ok = true;
                            Balance -= player.getPrice();
                            teamvalue += player.getPrice();
                            teamovr += player.getOverall();
                            std::cout << "Remaining balance: " << Balance << std::endl;
                        }
                        else if (tolower(yes_or_no) == 'n')
                            std::cout << "Let's choose again, then." << std::endl;
                        else
                            std::cout << "You can't really do that :) Try again?" << std::endl;
                    }
                break;
            }
            case (15):
            {
                for (const auto &player : Southampton.get_team_players())
                    if (player.getPosition() == "GK")
                    {
                        std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                        std::cout << "Price: " << player.getPrice() << std::endl;
                        std::cout << "Are you sure? (y/n) ";
                        std::cin >> yes_or_no;
                        if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                        {
                            ok = true;
                            Balance -= player.getPrice();
                            teamvalue += player.getPrice();
                            teamovr += player.getOverall();
                            std::cout << "Remaining balance: " << Balance << std::endl;
                        }
                        else if (tolower(yes_or_no) == 'n')
                            std::cout << "Let's choose again, then." << std::endl;
                        else
                            std::cout << "You can't really do that :) Try again?" << std::endl;
                    }
                break;
            }
            case (16):
            {
                for (const auto &player : Everton.get_team_players())
                    if (player.getPosition() == "GK")
                    {
                        std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                        std::cout << "Price: " << player.getPrice() << std::endl;
                        std::cout << "Are you sure? (y/n) ";
                        std::cin >> yes_or_no;
                        if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                        {
                            ok = true;
                            Balance -= player.getPrice();
                            teamvalue += player.getPrice();
                            teamovr += player.getOverall();
                            std::cout << "Remaining balance: " << Balance << std::endl;
                        }
                        else if (tolower(yes_or_no) == 'n')
                            std::cout << "Let's choose again, then." << std::endl;
                        else
                            std::cout << "You can't really do that :) Try again?" << std::endl;
                    }
                break;
            }
            case (17):
            {
                for (const auto &player : Leeds.get_team_players())
                    if (player.getPosition() == "GK")
                    {
                        std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                        std::cout << "Price: " << player.getPrice() << std::endl;
                        std::cout << "Are you sure? (y/n) ";
                        std::cin >> yes_or_no;
                        if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                        {
                            ok = true;
                            Balance -= player.getPrice();
                            teamvalue += player.getPrice();
                            teamovr += player.getOverall();
                            std::cout << "Remaining balance: " << Balance << std::endl;
                        }
                        else if (tolower(yes_or_no) == 'n')
                            std::cout << "Let's choose again, then." << std::endl;
                        else
                            std::cout << "You can't really do that :) Try again?" << std::endl;
                    }
                break;
            }
            case (18):
            {
                for (const auto &player : Burnley.get_team_players())
                    if (player.getPosition() == "GK")
                    {
                        std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                        std::cout << "Price: " << player.getPrice() << std::endl;
                        std::cout << "Are you sure? (y/n) ";
                        std::cin >> yes_or_no;
                        if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                        {
                            ok = true;
                            Balance -= player.getPrice();
                            teamvalue += player.getPrice();
                            teamovr += player.getOverall();
                            std::cout << "Remaining balance: " << Balance << std::endl;
                        }
                        else if (tolower(yes_or_no) == 'n')
                            std::cout << "Let's choose again, then." << std::endl;
                        else
                            std::cout << "You can't really do that :) Try again?" << std::endl;
                    }
                break;
            }
            case (19):
            {
                for (const auto &player : Watford.get_team_players())
                    if (player.getPosition() == "GK")
                    {
                        std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                        std::cout << "Price: " << player.getPrice() << std::endl;
                        std::cout << "Are you sure? (y/n) ";
                        std::cin >> yes_or_no;
                        if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                        {
                            ok = true;
                            Balance -= player.getPrice();
                            teamvalue += player.getPrice();
                            teamovr += player.getOverall();
                            std::cout << "Remaining balance: " << Balance << std::endl;
                        }
                        else if (tolower(yes_or_no) == 'n')
                            std::cout << "Let's choose again, then." << std::endl;
                        else
                            std::cout << "You can't really do that :) Try again?" << std::endl;
                    }
                break;
            }
            case (20):
            {
                for (const auto &player : Norwich.get_team_players())
                    if (player.getPosition() == "GK")
                    {
                        std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                        std::cout << "Price: " << player.getPrice() << std::endl;
                        std::cout << "Are you sure? (y/n) ";
                        std::cin >> yes_or_no;
                        if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                        {
                            ok = true;
                            Balance -= player.getPrice();
                            teamvalue += player.getPrice();
                            teamovr += player.getOverall();
                            std::cout << "Remaining balance: " << Balance << std::endl;
                        }
                        else if (tolower(yes_or_no) == 'n')
                            std::cout << "Let's choose again, then." << std::endl;
                        else if (Balance < player.getPrice())
                            std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                        else
                            std::cout << "You can't really do that :) Try again?" << std::endl;
                    }
                break;
            }

            default:
            {
                std::cout << "You can't really do that. Try again? :)" << std::endl;
                break;
            }
            }
        else
            std::cout << key << " is not a number. Try again." << std::endl;
    }
    int index = 1;
    std::string football_player_name;
    for (int i = 1; i <= fundasi; i++)
    {
        ok2 = false;
        while (!ok2)
        {
            std::cout << "Defender number " << i << ". Select the team he's currently playing for: " << std::endl;
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
            std::cout << "19. Watford" << std::endl;
            std::cout << "20. Norwich" << std::endl;
            std::cin >> key;
            if (isNumber(key) == true)
                switch (stoi(key))
                {
                case (1):
                {
                    index = 1;
                    for (const auto &player : Tottenham.get_team_players())
                        if (player.getPosition() == "DEF")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);
                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Tottenham.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "DEF")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (2):
                {
                    index = 1;
                    for (const auto &player : ManchesterCity.get_team_players())
                        if (player.getPosition() == "DEF")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : ManchesterCity.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "DEF")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (3):
                {
                    index = 1;
                    for (const auto &player : Chelsea.get_team_players())
                        if (player.getPosition() == "DEF")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Chelsea.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "DEF")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (4):
                {
                    index = 1;
                    for (const auto &player : ManchesterUnited.get_team_players())
                        if (player.getPosition() == "DEF")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : ManchesterUnited.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "DEF")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (5):
                {
                    index = 1;
                    for (const auto &player : Liverpool.get_team_players())
                        if (player.getPosition() == "DEF")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Liverpool.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "DEF")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }

                case (6):
                {
                    index = 1;
                    for (const auto &player : Arsenal.get_team_players())
                        if (player.getPosition() == "DEF")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Arsenal.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "DEF")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (7):
                {
                    index = 1;
                    for (const auto &player : Leicester.get_team_players())
                        if (player.getPosition() == "DEF")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Leicester.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "DEF")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (8):
                {
                    index = 1;
                    for (const auto &player : WestHam.get_team_players())
                        if (player.getPosition() == "DEF")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : WestHam.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "DEF")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (9):
                {
                    index = 1;
                    for (const auto &player : Brighton.get_team_players())
                        if (player.getPosition() == "DEF")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Brighton.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "DEF")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (10):
                {
                    index = 1;
                    for (const auto &player : Wolves.get_team_players())
                        if (player.getPosition() == "DEF")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Wolves.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "DEF")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (11):
                {
                    index = 1;
                    for (const auto &player : Newcastle.get_team_players())
                        if (player.getPosition() == "DEF")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Newcastle.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "DEF")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (12):
                {
                    index = 1;
                    for (const auto &player : CrystalPalace.get_team_players())
                        if (player.getPosition() == "DEF")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : CrystalPalace.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "DEF")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (13):
                {
                    index = 1;
                    for (const auto &player : Brentford.get_team_players())
                        if (player.getPosition() == "DEF")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Brentford.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "DEF")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (14):
                {
                    index = 1;
                    for (const auto &player : AstonVilla.get_team_players())
                        if (player.getPosition() == "DEF")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : AstonVilla.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "DEF")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (15):
                {
                    index = 1;
                    for (const auto &player : Southampton.get_team_players())
                        if (player.getPosition() == "DEF")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Southampton.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "DEF")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (16):
                {
                    index = 1;
                    for (const auto &player : Everton.get_team_players())
                        if (player.getPosition() == "DEF")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Everton.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "DEF")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (17):
                {
                    index = 1;
                    for (const auto &player : Leeds.get_team_players())
                        if (player.getPosition() == "DEF")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Leeds.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "DEF")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (18):
                {
                    index = 1;
                    for (const auto &player : Burnley.get_team_players())
                        if (player.getPosition() == "DEF")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Burnley.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "DEF")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (19):
                {
                    index = 1;
                    for (const auto &player : Watford.get_team_players())
                        if (player.getPosition() == "DEF")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Watford.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "DEF")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (20):
                {
                    index = 1;
                    for (const auto &player : Norwich.get_team_players())
                        if (player.getPosition() == "DEF")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Norwich.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "DEF")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }

                default:
                {
                    std::cout << "You can't really do that. Try again? :)" << std::endl;
                    break;
                }
                }
            else
                std::cout << key << " is not a number. Try again.\n";
        }
    }
    for (int i = 1; i <= mijlocasi; i++)
    {
        ok2 = false;
        while (!ok2)
        {
            std::cout << "Midfielder number " << i << ". " << std::endl;
            std::cout << "Select the team he's currently playing for: " << std::endl;
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
            std::cout << "19. Watford" << std::endl;
            std::cout << "20. Norwich" << std::endl;
            std::cin >> key;
            if (isNumber(key) == true)
                switch (stoi(key))
                {
                case (1):
                {
                    index = 1;
                    for (const auto &player : Tottenham.get_team_players())
                        if (player.getPosition() == "MID")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Tottenham.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "MID")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (2):
                {
                    index = 1;
                    for (const auto &player : ManchesterCity.get_team_players())
                        if (player.getPosition() == "MID")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : ManchesterCity.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "MID")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (3):
                {
                    index = 1;
                    for (const auto &player : Chelsea.get_team_players())
                        if (player.getPosition() == "MID")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Chelsea.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "MID")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (4):
                {
                    index = 1;
                    for (const auto &player : ManchesterUnited.get_team_players())
                        if (player.getPosition() == "MID")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : ManchesterUnited.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "MID")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (5):
                {
                    index = 1;
                    for (const auto &player : Liverpool.get_team_players())
                        if (player.getPosition() == "MID")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Liverpool.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "MID")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }

                case (6):
                {
                    index = 1;
                    for (const auto &player : Arsenal.get_team_players())
                        if (player.getPosition() == "MID")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Arsenal.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "MID")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (7):
                {
                    index = 1;
                    for (const auto &player : Leicester.get_team_players())
                        if (player.getPosition() == "MID")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Leicester.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "MID")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (8):
                {
                    index = 1;
                    for (const auto &player : WestHam.get_team_players())
                        if (player.getPosition() == "MID")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : WestHam.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "MID")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (9):
                {
                    index = 1;
                    for (const auto &player : Brighton.get_team_players())
                        if (player.getPosition() == "MID")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Brighton.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "MID")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (10):
                {
                    index = 1;
                    for (const auto &player : Wolves.get_team_players())
                        if (player.getPosition() == "MID")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Wolves.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "MID")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (11):
                {
                    index = 1;
                    for (const auto &player : Newcastle.get_team_players())
                        if (player.getPosition() == "MID")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Newcastle.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "DEF")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (12):
                {
                    index = 1;
                    for (const auto &player : CrystalPalace.get_team_players())
                        if (player.getPosition() == "MID")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : CrystalPalace.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "MID")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (13):
                {
                    index = 1;
                    for (const auto &player : Brentford.get_team_players())
                        if (player.getPosition() == "MID")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Brentford.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "MID")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (14):
                {
                    index = 1;
                    for (const auto &player : AstonVilla.get_team_players())
                        if (player.getPosition() == "MID")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : AstonVilla.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "MID")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (15):
                {
                    index = 1;
                    for (const auto &player : Southampton.get_team_players())
                        if (player.getPosition() == "MID")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Southampton.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "MID")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (16):
                {
                    index = 1;
                    for (const auto &player : Everton.get_team_players())
                        if (player.getPosition() == "MID")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Everton.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "MID")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (17):
                {
                    index = 1;
                    for (const auto &player : Leeds.get_team_players())
                        if (player.getPosition() == "MID")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Leeds.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "MID")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (18):
                {
                    index = 1;
                    for (const auto &player : Burnley.get_team_players())
                        if (player.getPosition() == "MID")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Burnley.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "MID")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (19):
                {
                    index = 1;
                    for (const auto &player : Watford.get_team_players())
                        if (player.getPosition() == "MID")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Watford.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "MID")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (20):
                {
                    index = 1;
                    for (const auto &player : Norwich.get_team_players())
                        if (player.getPosition() == "MID")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Norwich.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "MID")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }

                default:
                {
                    std::cout << "You can't really do that. Try again? :)" << std::endl;
                    break;
                }
                }
            else
                std::cout << key << " is not a number. Try again.\n";
        }
    }
    for (int i = 1; i <= atacanti; i++)
    {
        ok2 = false;
        while (!ok2)
        {
            std::cout << "Attacker number " << i << ". " << std::endl;
            std::cout << "Select the team he's currently playing for: " << std::endl;
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
            std::cout << "19. Watford" << std::endl;
            std::cout << "20. Norwich" << std::endl;
            std::cin >> key;
            if (isNumber(key) == true)
                switch (stoi(key))
                {
                case (1):
                {
                    index = 1;
                    for (const auto &player : Tottenham.get_team_players())
                        if (player.getPosition() == "ATT")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Tottenham.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "ATT")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (2):
                {
                    index = 1;
                    for (const auto &player : ManchesterCity.get_team_players())
                        if (player.getPosition() == "ATT")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : ManchesterCity.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "ATT")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (3):
                {
                    index = 1;
                    for (const auto &player : Chelsea.get_team_players())
                        if (player.getPosition() == "ATT")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Chelsea.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "ATT")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (4):
                {
                    index = 1;
                    for (const auto &player : ManchesterUnited.get_team_players())
                        if (player.getPosition() == "ATT")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : ManchesterUnited.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "ATT")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (5):
                {
                    index = 1;
                    for (const auto &player : Liverpool.get_team_players())
                        if (player.getPosition() == "ATT")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Liverpool.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "ATT")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }

                case (6):
                {
                    index = 1;
                    for (const auto &player : Arsenal.get_team_players())
                        if (player.getPosition() == "ATT")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Arsenal.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "ATT")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (7):
                {
                    index = 1;
                    for (const auto &player : Leicester.get_team_players())
                        if (player.getPosition() == "ATT")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Leicester.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "ATT")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (8):
                {
                    index = 1;
                    for (const auto &player : WestHam.get_team_players())
                        if (player.getPosition() == "ATT")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : WestHam.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "ATT")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (9):
                {
                    index = 1;
                    for (const auto &player : Brighton.get_team_players())
                        if (player.getPosition() == "ATT")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Brighton.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "ATT")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (10):
                {
                    index = 1;
                    for (const auto &player : Wolves.get_team_players())
                        if (player.getPosition() == "ATT")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Wolves.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "ATT")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (11):
                {
                    index = 1;
                    for (const auto &player : Newcastle.get_team_players())
                        if (player.getPosition() == "ATT")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Newcastle.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "ATT")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (12):
                {
                    index = 1;
                    for (const auto &player : CrystalPalace.get_team_players())
                        if (player.getPosition() == "ATT")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : CrystalPalace.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "ATT")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (13):
                {
                    index = 1;
                    for (const auto &player : Brentford.get_team_players())
                        if (player.getPosition() == "ATT")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Brentford.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "ATT")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (14):
                {
                    index = 1;
                    for (const auto &player : AstonVilla.get_team_players())
                        if (player.getPosition() == "ATT")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : AstonVilla.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "ATT")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (15):
                {
                    index = 1;
                    for (const auto &player : Southampton.get_team_players())
                        if (player.getPosition() == "ATT")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Southampton.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "ATT")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (16):
                {
                    index = 1;
                    for (const auto &player : Everton.get_team_players())
                        if (player.getPosition() == "ATT")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Everton.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "ATT")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (17):
                {
                    index = 1;
                    for (const auto &player : Leeds.get_team_players())
                        if (player.getPosition() == "ATT")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Leeds.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "ATT")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (18):
                {
                    index = 1;
                    for (const auto &player : Burnley.get_team_players())
                        if (player.getPosition() == "ATT")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Burnley.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "ATT")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (19):
                {
                    index = 1;
                    for (const auto &player : Watford.get_team_players())
                        if (player.getPosition() == "ATT")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Watford.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "ATT")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }
                case (20):
                {
                    index = 1;
                    for (const auto &player : Norwich.get_team_players())
                        if (player.getPosition() == "ATT")
                        {
                            std::cout << index << ". " << player.getName() << " " << player.getSecond_Name() << ", OVR: " << player.getOverall() << ", price: " << player.getPrice() << std::endl;
                            index++;
                        }
                    std::cout << "Type the name of the player you want to choose: " << std::endl;
                    std::getline(std::cin, football_player_name);

                    ok = false;
                    while (!ok)
                    {
                        for (const auto &player : Norwich.get_team_players())
                            if (football_player_name == player.getSecond_Name() && player.getPosition() == "ATT")
                            {
                                std::cout << "You've chosen " << player.getSecond_Name() << " " << player.getName() << ", " << player.getOverall() << std::endl;
                                std::cout << "Price: " << player.getPrice() << std::endl;
                                std::cout << "Are you sure? (y/n) ";
                                std::cin >> yes_or_no;
                                if (tolower(yes_or_no) == 'y' and Balance >= player.getPrice())
                                {
                                    ok = true;
                                    ok2 = true;
                                    Balance -= player.getPrice();
                                    teamvalue += player.getPrice();
                                    teamovr += player.getOverall();
                                    std::cout << "Remaining balance: " << Balance << std::endl;
                                    break;
                                }
                                else if (tolower(yes_or_no) == 'n')
                                {
                                    std::cout << "Let's choose again, then." << std::endl;
                                    break;
                                }
                                else if (Balance < player.getPrice())
                                {
                                    std::cout << "You don't have enough FUT Coins to buy this player. Choose another one.";
                                    break;
                                }
                                else
                                {
                                    std::cout << "You can't really do that :) Try again?" << std::endl;
                                    break;
                                }
                            }
                        if (!ok)
                        {
                            std::cout << "Player not found. Choose again: ";
                            std::getline(std::cin, football_player_name);
                        }
                    }
                    break;
                }

                default:
                {
                    std::cout << "You can't really do that. Try again? :)" << std::endl;
                    break;
                }
                }
            else
                std::cout << key << " is not a number. Try again.\n";
        }
    }
    std::cout << username << ", your team is valued at " << teamvalue << " and has an overall rating of " << teamovr / 11;
    return 0;
}
