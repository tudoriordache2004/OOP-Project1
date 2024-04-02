#include <iostream>
#include <vector>
#include <cstring>
#include <conio.h>
#include <unistd.h>
#include "prem_teams.h"
int main()
{
    Team Tottenham("Tottenham");

    Football_Player Vicario("Vicario", "Guiglelmo", "Tottenham", "Italy", "GK", 84, 15000);
    Football_Player Udogie("Udogie", "Destiny", "Tottenham", "Italy", "DEF", 81, 12000);
    Football_Player VandeVen("Van de Ven", "Micky", "Tottenham", "Netherlands", "DEF", 79, 7500);
    Football_Player Romero("Romero", "Cristian", "Tottenham", "Argentina", "DEF", 84, 15500);
    Football_Player Porro("Porro", "Pedro", "Tottenham", "Spain", "DEF", 84, 22500);
    Football_Player Bentancur("Bentancur", "Rodrigo", "Tottenham", "Uruguay", "MID", 80, 7500);
    Football_Player Sarr("Sarr", "Pape-Matar", "Tottenham", "Senegal", "MID", 75, 1500);
    Football_Player Maddison("Maddison", "James", "Tottenham", "England", "MID", 86, 45000);
    Football_Player Son("Son", "Heung-Min", "Tottenham", "South Korea", "ATT", 88, 83250);
    Football_Player Richarlison("Richarlison", "", "Tottenham", "Brazil", "ATT", 80, 7250);
    Football_Player Kulusevski("Kulusevski", "Dejan", "Tottenham", "Sweden", "ATT", 83, 9450);

    Tottenham.addPlayer(Vicario);
    Tottenham.addPlayer(Udogie);
    Tottenham.addPlayer(VandeVen);
    Tottenham.addPlayer(Romero);
    Tottenham.addPlayer(Porro);
    Tottenham.addPlayer(Sarr);
    Tottenham.addPlayer(Bentancur);
    Tottenham.addPlayer(Maddison);
    Tottenham.addPlayer(Son);
    Tottenham.addPlayer(Richarlison);
    Tottenham.addPlayer(Kulusevski);

    // Substitutes
    Football_Player Gazzaniga("Gazzaniga", "Paulo", "Tottenham", "Argentina", "GK", 77, 4000);
    Football_Player Davies("Davies", "Ben", "Tottenham", "Wales", "DEF", 76, 6500);
    Football_Player Doherty("Doherty", "Matt", "Tottenham", "Ireland", "DEF", 76, 7000);
    Football_Player Winks("Winks", "Harry", "Tottenham", "England", "MID", 78, 8000);
    Football_Player Ndombele("Ndombele", "Tanguy", "Tottenham", "France", "MID", 79, 10000);
    Football_Player Bergwijn("Bergwijn", "Steven", "Tottenham", "Netherlands", "ATT", 78, 8500);
    Football_Player Scarlett("Scarlett", "Dane", "Tottenham", "England", "ATT", 66, 1000);

    Tottenham.addPlayer(Gazzaniga);
    Tottenham.addPlayer(Davies);
    Tottenham.addPlayer(Doherty);
    Tottenham.addPlayer(Winks);
    Tottenham.addPlayer(Ndombele);
    Tottenham.addPlayer(Bergwijn);
    Tottenham.addPlayer(Scarlett);

    Team ManchesterCity("Manchester City");

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

    ManchesterCity.addPlayer(Ederson);
    ManchesterCity.addPlayer(Walker);
    ManchesterCity.addPlayer(Dias);
    ManchesterCity.addPlayer(Stones);
    ManchesterCity.addPlayer(Cancelo);
    ManchesterCity.addPlayer(Rodri);
    ManchesterCity.addPlayer(DeBruyne);
    ManchesterCity.addPlayer(Gundogan);
    ManchesterCity.addPlayer(Mahrez);
    ManchesterCity.addPlayer(Foden);
    ManchesterCity.addPlayer(Jesus);

    // Substitutes
    Football_Player Steffen("Steffen", "Zack", "Manchester City", "USA", "GK", 75, 3000);
    Football_Player Laporte("Laporte", "Aymeric", "Manchester City", "France", "DEF", 85, 25000);
    Football_Player Mendy("Mendy", "Benjamin", "Manchester City", "France", "DEF", 80, 12000);
    Football_Player Silva("Silva", "Bernardo", "Manchester City", "Portugal", "MID", 87, 35000);
    Football_Player Doyle("Doyle", "Tommy", "Manchester City", "England", "MID", 75, 20000);
    Football_Player Sterling("Sterling", "Raheem", "Manchester City", "England", "ATT", 88, 40000);
    Football_Player Palmer("Palmer", "Cole", "Manchester City", "England", "ATT", 68, 2000);

    ManchesterCity.addPlayer(Steffen);
    ManchesterCity.addPlayer(Laporte);
    ManchesterCity.addPlayer(Mendy);
    ManchesterCity.addPlayer(Silva);
    ManchesterCity.addPlayer(Doyle);
    ManchesterCity.addPlayer(Sterling);
    ManchesterCity.addPlayer(Palmer);

    Team Chelsea("Chelsea");

    Football_Player Mendy2("Mendy", "Edouard", "football_players", "Senegal", "GK", 85, 32000);
    Football_Player James("James", "Reece", "football_players", "England", "DEF", 84, 28000);
    Football_Player Silva2("Silva", "Thiago", "football_players", "Brazil", "DEF", 86, 37000);
    Football_Player Rudiger("Rudiger", "Antonio", "football_players", "Germany", "DEF", 84, 32000);
    Football_Player Chilwell("Chilwell", "Ben", "football_players", "England", "DEF", 83, 31000);
    Football_Player Kante("Kante", "N'Golo", "football_players", "France", "MID", 88, 48000);
    Football_Player Jorginho("Jorginho", "", "football_players", "Italy", "MID", 84, 32000);
    Football_Player Mount("Mount", "Mason", "football_players", "England", "MID", 85, 38000);
    Football_Player Havertz("Havertz", "Kai", "football_players", "Germany", "MID", 85, 41000);
    Football_Player Werner("Werner", "Timo", "football_players", "Germany", "ATT", 83, 34000);
    Football_Player Lukaku("Lukaku", "Romelu", "football_players", "Belgium", "ATT", 88, 55000);

    Chelsea.addPlayer(Mendy2);
    Chelsea.addPlayer(James);
    Chelsea.addPlayer(Silva2);
    Chelsea.addPlayer(Rudiger);
    Chelsea.addPlayer(Chilwell);
    Chelsea.addPlayer(Kante);
    Chelsea.addPlayer(Jorginho);
    Chelsea.addPlayer(Mount);
    Chelsea.addPlayer(Havertz);
    Chelsea.addPlayer(Werner);
    Chelsea.addPlayer(Lukaku);

    // Substitutes
    Football_Player Kepa("Kepa", "Arrizabalaga", "Chelsea", "Spain", "GK", 80, 15000);
    Football_Player Christensen("Christensen", "Andreas", "Chelsea", "Denmark", "DEF", 82, 18000);
    Football_Player Alonso("Alonso", "Marcos", "Chelsea", "Spain", "DEF", 81, 16000);
    Football_Player Kovacic("Kovacic", "Mateo", "Chelsea", "Croatia", "MID", 83, 22000);
    Football_Player Barkley("Barkley", "Ross", "Chelsea", "England", "MID", 78, 10000);
    Football_Player Pulisic("Pulisic", "Christian", "Chelsea", "USA", "ATT", 84, 28000);
    Football_Player Abraham("Abraham", "Tammy", "Chelsea", "England", "ATT", 81, 24000);

    Chelsea.addPlayer(Kepa);
    Chelsea.addPlayer(Christensen);
    Chelsea.addPlayer(Alonso);
    Chelsea.addPlayer(Kovacic);
    Chelsea.addPlayer(Barkley);
    Chelsea.addPlayer(Pulisic);
    Chelsea.addPlayer(Abraham);

    Team ManchesterUnited("Manchester United");

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

    ManchesterUnited.addPlayer(DeGea);
    ManchesterUnited.addPlayer(WanBissaka);
    ManchesterUnited.addPlayer(Maguire);
    ManchesterUnited.addPlayer(Varane);
    ManchesterUnited.addPlayer(Shaw);
    ManchesterUnited.addPlayer(McTominay);
    ManchesterUnited.addPlayer(Fred);
    ManchesterUnited.addPlayer(Pogba);
    ManchesterUnited.addPlayer(Fernandes);
    ManchesterUnited.addPlayer(Rashford);
    ManchesterUnited.addPlayer(Ronaldo);

    // Substitutes
    Football_Player Henderson("Henderson", "Dean", "Manchester United", "England", "GK", 82, 18000);
    Football_Player Bailly("Bailly", "Eric", "Manchester United", "Ivory Coast", "DEF", 79, 15000);
    Football_Player Lindelof("Lindelof", "Victor", "Manchester United", "Sweden", "DEF", 81, 17000);
    Football_Player VanDeBeek("Van de Beek", "Donny", "Manchester United", "Netherlands", "MID", 80, 16000);
    Football_Player Martial("Martial", "Anthony", "Manchester United", "France", "ATT", 84, 22000);
    Football_Player Lingard("Lingard", "Jesse", "Manchester United", "England", "MID", 79, 15000);
    Football_Player Greenwood("Greenwood", "Mason", "Manchester United", "England", "ATT", 83, 20000);

    ManchesterUnited.addPlayer(Henderson);
    ManchesterUnited.addPlayer(Bailly);
    ManchesterUnited.addPlayer(Lindelof);
    ManchesterUnited.addPlayer(VanDeBeek);
    ManchesterUnited.addPlayer(Martial);
    ManchesterUnited.addPlayer(Lingard);
    ManchesterUnited.addPlayer(Greenwood);

    Team Liverpool("Liverpool");

    Football_Player Alisson("Alisson", "", "Liverpool", "Brazil", "GK", 88, 55000);
    Football_Player AlexanderArnold("Alexander-Arnold", "Trent", "Liverpool", "England", "DEF", 87, 50000);
    Football_Player VanDijk("Van Dijk", "Virgil", "Liverpool", "Netherlands", "DEF", 90, 60000);
    Football_Player Matip("Matip", "Joel", "Liverpool", "Cameroon", "DEF", 85, 45000);
    Football_Player Robertson("Robertson", "Andrew", "Liverpool", "Scotland", "DEF", 87, 50000);
    Football_Player Fabinho("Fabinho", "", "Liverpool", "Brazil", "MID", 86, 52000);
    Football_Player Henderson2("Henderson", "Jordan", "Liverpool", "England", "MID", 86, 52000);
    Football_Player Thiago("Thiago", "", "Liverpool", "Spain", "MID", 87, 53000);
    Football_Player Salah("Salah", "Mohamed", "Liverpool", "Egypt", "ATT", 90, 65000);
    Football_Player Firmino("Firmino", "Roberto", "Liverpool", "Brazil", "ATT", 88, 60000);
    Football_Player Mane("Mane", "Sadio", "Liverpool", "Senegal", "ATT", 89, 62000);

    Liverpool.addPlayer(Alisson);
    Liverpool.addPlayer(AlexanderArnold);
    Liverpool.addPlayer(VanDijk);
    Liverpool.addPlayer(Matip);
    Liverpool.addPlayer(Robertson);
    Liverpool.addPlayer(Fabinho);
    Liverpool.addPlayer(Henderson2);
    Liverpool.addPlayer(Thiago);
    Liverpool.addPlayer(Salah);
    Liverpool.addPlayer(Firmino);
    Liverpool.addPlayer(Mane);

    // Substitutes
    Football_Player Adrian("Adrian", "", "Liverpool", "Spain", "GK", 76, 5000);
    Football_Player Konate("Konate", "Ibrahima", "Liverpool", "France", "DEF", 80, 12000);
    Football_Player Gomez("Gomez", "Joe", "Liverpool", "England", "DEF", 81, 14000);
    Football_Player Keita("Keita", "Naby", "Liverpool", "Guinea", "MID", 80, 13000);
    Football_Player Elliott("Elliott", "Harvey", "Liverpool", "England", "MID", 74, 4000);
    Football_Player OxladeChamberlain("Oxlade-Chamberlain", "Alex", "Liverpool", "England", "MID", 79, 11000);
    Football_Player Jota("Jota", "Diogo", "Liverpool", "Portugal", "ATT", 83, 18000);

    Liverpool.addPlayer(Adrian);
    Liverpool.addPlayer(Konate);
    Liverpool.addPlayer(Gomez);
    Liverpool.addPlayer(Keita);
    Liverpool.addPlayer(Elliott);
    Liverpool.addPlayer(OxladeChamberlain);
    Liverpool.addPlayer(Jota);

    Team Arsenal("Arsenal");

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

    Arsenal.addPlayer(Leno);
    Arsenal.addPlayer(Tierney);
    Arsenal.addPlayer(White);
    Arsenal.addPlayer(Gabriel);
    Arsenal.addPlayer(Chambers);
    Arsenal.addPlayer(Partey);
    Arsenal.addPlayer(Xhaka);
    Arsenal.addPlayer(Saka);
    Arsenal.addPlayer(Odegaard);
    Arsenal.addPlayer(Pepe);
    Arsenal.addPlayer(Aubameyang);

    // Substitutes
    Football_Player Ramsdale("Ramsdale", "Aaron", "Arsenal", "England", "GK", 77, 8000);
    Football_Player Mari("Mari", "Pablo", "Arsenal", "Spain", "DEF", 78, 9000);
    Football_Player Holding("Holding", "Rob", "Arsenal", "England", "DEF", 78, 28000);
    Football_Player Elneny("Elneny", "Mohamed", "Arsenal", "Egypt", "MID", 75, 6000);
    Football_Player Lokonga("Lokonga", "Albert", "Arsenal", "Belgium", "MID", 75, 6500);
    Football_Player Martinelli("Martinelli", "Gabriel", "Arsenal", "Brazil", "ATT", 79, 10000);
    Football_Player Lacazette("Lacazette", "Alexandre", "Arsenal", "France", "ATT", 82, 18000);

    Arsenal.addPlayer(Ramsdale);
    Arsenal.addPlayer(Mari);
    Arsenal.addPlayer(Holding);
    Arsenal.addPlayer(Elneny);
    Arsenal.addPlayer(Lokonga);
    Arsenal.addPlayer(Martinelli);
    Arsenal.addPlayer(Lacazette);

    Team Leicester("Leicester City");

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

    Leicester.addPlayer(Schmeichel);
    Leicester.addPlayer(Castagne);
    Leicester.addPlayer(Soyuncu);
    Leicester.addPlayer(Evans);
    Leicester.addPlayer(Thomas);
    Leicester.addPlayer(Ndidi);
    Leicester.addPlayer(Tielemans);
    Leicester.addPlayer(Daka);
    Leicester.addPlayer(Perez);
    Leicester.addPlayer(Vardy);
    Leicester.addPlayer(Barnes);

    // Substitutes
    Football_Player Ward("Ward", "Danny", "Leicester City", "Wales", "GK", 74, 20000);
    Football_Player Bertrand("Bertrand", "Ryan", "Leicester City", "England", "DEF", 77, 13000);
    Football_Player Amartey("Amartey", "Daniel", "Leicester City", "Ghana", "DEF", 74, 9000);
    Football_Player Choudhury("Choudhury", "Hamza", "Leicester City", "England", "MID", 73, 8000);
    Football_Player DewsburyHall("Dewsbury-Hall", "Kiernan", "Leicester City", "England", "MID", 72, 7500);
    Football_Player Iheanacho("Iheanacho", "Kelechi", "Leicester City", "Nigeria", "ATT", 78, 18000);
    Football_Player Lookman("Lookman", "Ademola", "Leicester City", "England", "ATT", 76, 14500);

    Leicester.addPlayer(Ward);
    Leicester.addPlayer(Bertrand);
    Leicester.addPlayer(Amartey);
    Leicester.addPlayer(Choudhury);
    Leicester.addPlayer(DewsburyHall);
    Leicester.addPlayer(Iheanacho);
    Leicester.addPlayer(Lookman);

    Team WestHam("West Ham United");

    Football_Player Fabianski("Fabianski", "Lukasz", "West Ham United", "Poland", "GK", 83, 37000);
    Football_Player Coufal("Coufal", "Vladimir", "West Ham United", "Czech Republic", "DEF", 81, 34000);
    Football_Player Dawson("Dawson", "Craig", "West Ham United", "England", "DEF", 80, 31000);
    Football_Player Ogbonna("Ogbonna", "Angelo", "West Ham United", "Italy", "DEF", 81, 33000);
    Football_Player Cresswell("Cresswell", "Aaron", "West Ham United", "England", "DEF", 81, 32000);
    Football_Player Rice("Rice", "Declan", "West Ham United", "England", "MID", 84, 41000);
    Football_Player Soumare("Soumare", "Boubakary", "West Ham United", "France", "MID", 78, 31000);
    Football_Player Soucek("Soucek", "Tomas", "West Ham United", "Czech Republic", "MID", 82, 38000);
    Football_Player Bowen("Bowen", "Jarrod", "West Ham United", "England", "ATT", 81, 35000);
    Football_Player Benrahma("Benrahma", "Said", "West Ham United", "Algeria", "ATT", 80, 33000);
    Football_Player Antonio("Antonio", "Michail", "West Ham United", "England", "ATT", 82, 36000);

    WestHam.addPlayer(Fabianski);
    WestHam.addPlayer(Coufal);
    WestHam.addPlayer(Dawson);
    WestHam.addPlayer(Ogbonna);
    WestHam.addPlayer(Cresswell);
    WestHam.addPlayer(Rice);
    WestHam.addPlayer(Soumare);
    WestHam.addPlayer(Soucek);
    WestHam.addPlayer(Bowen);
    WestHam.addPlayer(Benrahma);
    WestHam.addPlayer(Antonio);

    // Substitutes
    Football_Player Randolph("Randolph", "Darren", "West Ham United", "Ireland", "GK", 74, 12000);
    Football_Player Diop("Diop", "Issa", "West Ham United", "France", "DEF", 76, 15000);
    Football_Player Fredericks("Fredericks", "Ryan", "West Ham United", "England", "DEF", 75, 14000);
    Football_Player Johnson("Johnson", "Ben", "West Ham United", "England", "DEF", 72, 10000);
    Football_Player Noble("Noble", "Mark", "West Ham United", "England", "MID", 75, 16000);
    Football_Player Lanzini("Lanzini", "Manuel", "West Ham United", "Argentina", "MID", 76, 18000);
    Football_Player Yarmolenko("Yarmolenko", "Andriy", "West Ham United", "Ukraine", "ATT", 77, 22000);

    WestHam.addPlayer(Randolph);
    WestHam.addPlayer(Diop);
    WestHam.addPlayer(Fredericks);
    WestHam.addPlayer(Johnson);
    WestHam.addPlayer(Noble);
    WestHam.addPlayer(Lanzini);
    WestHam.addPlayer(Yarmolenko);

    Team Brighton("Brighton & Hove Albion");

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

    Brighton.addPlayer(Sanchez);
    Brighton.addPlayer(Veltman);
    Brighton.addPlayer(Dunk);
    Brighton.addPlayer(Webster);
    Brighton.addPlayer(Burn);
    Brighton.addPlayer(Milner);
    Brighton.addPlayer(Lallana);
    Brighton.addPlayer(Gross);
    Brighton.addPlayer(Trossard);
    Brighton.addPlayer(Maupay);
    Brighton.addPlayer(Welbeck);

    // Substitutes
    Football_Player Steele("Steele", "Jason", "Brighton & Hove Albion", "England", "GK", 72, 8000);
    Football_Player Duffy("Duffy", "Shane", "Brighton & Hove Albion", "Ireland", "DEF", 76, 27000);
    Football_Player Bissouma("Bissouma", "Yves", "Brighton & Hove Albion", "Mali", "MID", 77, 18000);
    Football_Player MacAllister("MacAllister", "Alexis", "Brighton & Hove Albion", "Argentina", "MID", 76, 16000);
    Football_Player Zeqiri("Zeqiri", "Andi", "Brighton & Hove Albion", "Switzerland", "ATT", 74, 15000);
    Football_Player Connolly("Connolly", "Aaron", "Brighton & Hove Albion", "Ireland", "ATT", 75, 14000);
    Football_Player Moder("Moder", "Jakub", "Brighton & Hove Albion", "Poland", "MID", 75, 15000);

    Brighton.addPlayer(Steele);
    Brighton.addPlayer(Duffy);
    Brighton.addPlayer(Bissouma);
    Brighton.addPlayer(MacAllister);
    Brighton.addPlayer(Zeqiri);
    Brighton.addPlayer(Connolly);
    Brighton.addPlayer(Moder);

    Team Wolves("Wolverhampton Wanderers");

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

    Wolves.addPlayer(Sa);
    Wolves.addPlayer(Semedo);
    Wolves.addPlayer(Coady);
    Wolves.addPlayer(Kilman);
    Wolves.addPlayer(AitNouri);
    Wolves.addPlayer(Neves);
    Wolves.addPlayer(Moutinho);
    Wolves.addPlayer(Podence);
    Wolves.addPlayer(Traore);
    Wolves.addPlayer(Jimenez);
    Wolves.addPlayer(Neto);

    // Substitutes
    Football_Player Ruddy("Ruddy", "John", "Wolverhampton Wanderers", "England", "GK", 76, 10000);
    Football_Player Boly("Boly", "Willy", "Wolverhampton Wanderers", "France", "DEF", 79, 26000);
    Football_Player Marcal("Marcal", "Fernando", "Wolverhampton Wanderers", "Brazil", "DEF", 77, 24000);
    Football_Player Dendoncker("Dendoncker", "Leander", "Wolverhampton Wanderers", "Belgium", "MID", 78, 25000);
    Football_Player GibbsWhite("Gibbs-White", "Morgan", "Wolverhampton Wanderers", "England", "MID", 75, 15000);
    Football_Player Silva3("Silva", "Fabio", "Wolverhampton Wanderers", "Portugal", "ATT", 76, 18000);
    Football_Player Trincao("Trincao", "Francisco", "Wolverhampton Wanderers", "Portugal", "ATT", 78, 28000);

    Wolves.addPlayer(Ruddy);
    Wolves.addPlayer(Boly);
    Wolves.addPlayer(Marcal);
    Wolves.addPlayer(Dendoncker);
    Wolves.addPlayer(GibbsWhite);
    Wolves.addPlayer(Silva3);
    Wolves.addPlayer(Trincao);

    Team Newcastle("Newcastle United");

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

    Newcastle.addPlayer(Dubravka);
    Newcastle.addPlayer(Manquillo);
    Newcastle.addPlayer(Lascelles);
    Newcastle.addPlayer(Clark);
    Newcastle.addPlayer(Lewis);
    Newcastle.addPlayer(Hayden);
    Newcastle.addPlayer(Shelvey);
    Newcastle.addPlayer(Almiron);
    Newcastle.addPlayer(Willock);
    Newcastle.addPlayer(SaintMaximin);
    Newcastle.addPlayer(Wilson);

    // Substitutes
    Football_Player Darlow("Darlow", "Karl", "Newcastle United", "England", "GK", 77, 20000);
    Football_Player Fernandez("Fernandez", "Federico", "Newcastle United", "Argentina", "DEF", 78, 27000);
    Football_Player Dummett("Dummett", "Paul", "Newcastle United", "Wales", "DEF", 75, 22000);
    Football_Player Ritchie("Ritchie", "Matt", "Newcastle United", "Scotland", "MID", 76, 25000);
    Football_Player Longstaff("Longstaff", "Sean", "Newcastle United", "England", "MID", 75, 24000);
    Football_Player Fraser("Fraser", "Ryan", "Newcastle United", "Scotland", "MID", 76, 26000);
    Football_Player Gayle("Gayle", "Dwight", "Newcastle United", "England", "ATT", 76, 28000);

    Newcastle.addPlayer(Darlow);
    Newcastle.addPlayer(Fernandez);
    Newcastle.addPlayer(Dummett);
    Newcastle.addPlayer(Ritchie);
    Newcastle.addPlayer(Longstaff);
    Newcastle.addPlayer(Fraser);
    Newcastle.addPlayer(Gayle);

    Team CrystalPalace("Crystal Palace");

    Football_Player Guaita("Guaita", "Vicente", "Crystal Palace", "Spain", "GK", 79, 32000);
    Football_Player Ward2("Ward", "Joel", "Crystal Palace", "Wales", "DEF", 75, 27000);
    Football_Player Kouyate("Kouyate", "Cheikhou", "Crystal Palace", "Senegal", "DEF", 76, 28000);
    Football_Player Andersen("Andersen", "Joachim", "Crystal Palace", "Denmark", "DEF", 77, 29000);
    Football_Player Mitchell("Mitchell", "Tyrick", "Crystal Palace", "England", "DEF", 75, 27000);
    Football_Player Milivojevic("Milivojevic", "Luka", "Crystal Palace", "Serbia", "MID", 77, 28000);
    Football_Player Gallagher("Gallagher", "Conor", "Crystal Palace", "England", "MID", 76, 28000);
    Football_Player Eze("Eze", "Eberechi", "Crystal Palace", "England", "MID", 78, 30000);
    Football_Player Ayew("Ayew", "Jordan", "Crystal Palace", "Ghana", "ATT", 77, 29000);
    Football_Player Zaha("Zaha", "Wilfried", "Crystal Palace", "Ivory Coast", "ATT", 80, 31000);
    Football_Player Olise("Olise", "Michael", "Crystal Palace", "France", "ATT", 76, 28000);

    CrystalPalace.addPlayer(Guaita);
    CrystalPalace.addPlayer(Ward2);
    CrystalPalace.addPlayer(Kouyate);
    CrystalPalace.addPlayer(Andersen);
    CrystalPalace.addPlayer(Mitchell);
    CrystalPalace.addPlayer(Milivojevic);
    CrystalPalace.addPlayer(Gallagher);
    CrystalPalace.addPlayer(Eze);
    CrystalPalace.addPlayer(Ayew);
    CrystalPalace.addPlayer(Zaha);
    CrystalPalace.addPlayer(Olise);

    // Substitutes
    Football_Player Butland("Butland", "Jack", "Crystal Palace", "England", "GK", 75, 25000);
    Football_Player Clyne("Clyne", "Nathaniel", "Crystal Palace", "England", "DEF", 74, 23000);
    Football_Player Cahill("Cahill", "Gary", "Crystal Palace", "England", "DEF", 76, 26000);
    Football_Player Riedewald("Riedewald", "Jairo", "Crystal Palace", "Netherlands", "MID", 76, 27000);
    Football_Player McArthur("McArthur", "James", "Crystal Palace", "Scotland", "MID", 76, 27000);
    Football_Player Schlupp("Schlupp", "Jeffrey", "Crystal Palace", "Ghana", "MID", 75, 26000);
    Football_Player Benteke("Benteke", "Christian", "Crystal Palace", "Belgium", "ATT", 77, 28000);

    CrystalPalace.addPlayer(Butland);
    CrystalPalace.addPlayer(Clyne);
    CrystalPalace.addPlayer(Cahill);
    CrystalPalace.addPlayer(Riedewald);
    CrystalPalace.addPlayer(McArthur);
    CrystalPalace.addPlayer(Schlupp);
    CrystalPalace.addPlayer(Benteke);

    Team Brentford("Brentford");

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

    Brentford.addPlayer(Raya);
    Brentford.addPlayer(Henry);
    Brentford.addPlayer(Jansson);
    Brentford.addPlayer(Pinnock);
    Brentford.addPlayer(Ajer);
    Brentford.addPlayer(Canos);
    Brentford.addPlayer(Norgaard);
    Brentford.addPlayer(Jensen);
    Brentford.addPlayer(Janelt);
    Brentford.addPlayer(Toney);
    Brentford.addPlayer(Mbeumo);

    // Substitutes
    Football_Player Daniels("Daniels", "Luke", "Brentford", "England", "GK", 75, 25000);
    Football_Player Roerslev("Roerslev", "Mads", "Brentford", "Denmark", "DEF", 73, 23000);
    Football_Player Goode("Goode", "Ethan", "Brentford", "England", "DEF", 74, 24000);
    Football_Player Reid("Reid", "Charlie", "Brentford", "England", "DEF", 74, 24000);
    Football_Player Onyeka("Onyeka", "Frank", "Brentford", "Nigeria", "MID", 75, 25000);
    Football_Player Baptiste("Baptiste", "Myles", "Brentford", "England", "MID", 72, 22000);
    Football_Player Ghoddos("Ghoddos", "Saman", "Brentford", "Iran", "MID", 74, 24000);
    Football_Player Fosu("Fosu", "Tariqe", "Brentford", "England", "MID", 74, 24000);
    Football_Player Forss("Forss", "Marcus", "Brentford", "Finland", "ATT", 75, 25000);

    Brentford.addPlayer(Daniels);
    Brentford.addPlayer(Roerslev);
    Brentford.addPlayer(Goode);
    Brentford.addPlayer(Reid);
    Brentford.addPlayer(Onyeka);
    Brentford.addPlayer(Baptiste);
    Brentford.addPlayer(Ghoddos);
    Brentford.addPlayer(Fosu);
    Brentford.addPlayer(Forss);

    Team AstonVilla("Aston Villa");

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

    AstonVilla.addPlayer(Martinez);
    AstonVilla.addPlayer(Cash);
    AstonVilla.addPlayer(Konsa);
    AstonVilla.addPlayer(Mings);
    AstonVilla.addPlayer(Targett);
    AstonVilla.addPlayer(Luiz);
    AstonVilla.addPlayer(McGinn);
    AstonVilla.addPlayer(Ramsey);
    AstonVilla.addPlayer(Buendia);
    AstonVilla.addPlayer(Bailey);
    AstonVilla.addPlayer(Watkins);

    // Substitutes
    Football_Player Steer("Steer", "Jed", "Aston Villa", "England", "GK", 75, 25000);
    Football_Player Chambers2("Chambers", "Kaine", "Aston Villa", "England", "DEF", 72, 22000);
    Football_Player Hause("Hause", "Kortney", "Aston Villa", "England", "DEF", 73, 23000);
    Football_Player Engels("Engels", "Bjorn", "Aston Villa", "Belgium", "DEF", 74, 24000);
    Football_Player Nakamba("Nakamba", "Marvelous", "Aston Villa", "Zimbabwe", "MID", 74, 24000);
    Football_Player Sanson("Sanson", "Morgan", "Aston Villa", "France", "MID", 75, 25000);
    Football_Player ElGhazi("El Ghazi", "Anwar", "Aston Villa", "Netherlands", "ATT", 76, 26000);
    Football_Player Davis("Davis", "Keinan", "Aston Villa", "England", "ATT", 73, 23000);
    Football_Player Archer("Archer", "Rhys", "Aston Villa", "England", "ATT", 72, 22000);

    AstonVilla.addPlayer(Steer);
    AstonVilla.addPlayer(Chambers2);
    AstonVilla.addPlayer(Hause);
    AstonVilla.addPlayer(Engels);
    AstonVilla.addPlayer(Nakamba);
    AstonVilla.addPlayer(Sanson);
    AstonVilla.addPlayer(ElGhazi);
    AstonVilla.addPlayer(Davis);
    AstonVilla.addPlayer(Archer);

    Team Southampton("Southampton");

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

    Southampton.addPlayer(McCarthy);
    Southampton.addPlayer(Livramento);
    Southampton.addPlayer(Bednarek);
    Southampton.addPlayer(Salisu);
    Southampton.addPlayer(Perraud);
    Southampton.addPlayer(Romeu);
    Southampton.addPlayer(WardProwse);
    Southampton.addPlayer(Armstrong);
    Southampton.addPlayer(Redmond);
    Southampton.addPlayer(Adams);
    Southampton.addPlayer(Tella);

    // Adding substitutes for Southampton
    Football_Player Forster("Forster", "Fraser", "Southampton", "England", "GK", 75, 24000);
    Football_Player Stephens("Stephens", "Jack", "Southampton", "England", "DEF", 72, 21000);
    Football_Player WalkerPeters("Walker-Peters", "Kyle", "Southampton", "England", "DEF", 74, 23000);
    Football_Player Diallo("Diallo", "Ibrahima", "Southampton", "Senegal", "MID", 73, 22000);
    Football_Player Djenepo("Djenepo", "Moussa", "Southampton", "Mali", "MID", 74, 23000);
    Football_Player Long("Long", "Shane", "Southampton", "Ireland", "ATT", 75, 24000);
    Football_Player Elyounoussi("Elyounoussi", "Mohamed", "Southampton", "Norway", "ATT", 75, 24000);

    Southampton.addPlayer(Forster);
    Southampton.addPlayer(Stephens);
    Southampton.addPlayer(WalkerPeters);
    Southampton.addPlayer(Diallo);
    Southampton.addPlayer(Djenepo);
    Southampton.addPlayer(Long);
    Southampton.addPlayer(Elyounoussi);

    Team Everton("Everton");

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

    Everton.addPlayer(Pickford);
    Everton.addPlayer(Coleman);
    Everton.addPlayer(Mina);
    Everton.addPlayer(Keane);
    Everton.addPlayer(Digne);
    Everton.addPlayer(Allan);
    Everton.addPlayer(Doucoure);
    Everton.addPlayer(Rodriguez);
    Everton.addPlayer(Danjuma);
    Everton.addPlayer(Gray);
    Everton.addPlayer(CalvertLewin);

    // Adding substitutes for Everton
    Football_Player Begovic("Begovic", "Asmir", "Everton", "Bosnia and Herzegovina", "GK", 76, 20000);
    Football_Player Godfrey("Godfrey", "Ben", "Everton", "England", "DEF", 78, 25000);
    Football_Player Holgate("Holgate", "Mason", "Everton", "England", "DEF", 77, 24000);
    Football_Player Gomes("Gomes", "Andre", "Everton", "Portugal", "MID", 77, 26000);
    Football_Player Iwobi("Iwobi", "Alex", "Everton", "Nigeria", "MID", 78, 27000);
    Football_Player Townsend("Townsend", "Andros", "Everton", "England", "ATT", 78, 27000);
    Football_Player Rondon("Rondon", "Salomon", "Everton", "Venezuela", "ATT", 77, 26000);

    Everton.addPlayer(Begovic);
    Everton.addPlayer(Godfrey);
    Everton.addPlayer(Holgate);
    Everton.addPlayer(Gomes);
    Everton.addPlayer(Iwobi);
    Everton.addPlayer(Townsend);
    Everton.addPlayer(Rondon);

    Team Leeds("Leeds United");

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

    Leeds.addPlayer(Meslier);
    Leeds.addPlayer(Ayling);
    Leeds.addPlayer(Koch);
    Leeds.addPlayer(Struijk);
    Leeds.addPlayer(Firpo);
    Leeds.addPlayer(Phillips);
    Leeds.addPlayer(Dallas);
    Leeds.addPlayer(Raphinha);
    Leeds.addPlayer(Rodrigo);
    Leeds.addPlayer(Harrison);
    Leeds.addPlayer(Bamford);

    // Substitutes
    Football_Player Klaesson("Klaesson", "Kristoffer", "Leeds United", "Norway", "GK", 74, 21000);
    Football_Player Cooper("Cooper", "Liam", "Leeds United", "Scotland", "DEF", 75, 22000);
    Football_Player Llorente("Llorente", "Diego", "Leeds United", "Spain", "DEF", 78, 27000);
    Football_Player Davis2("Davis", "Leif", "Leeds United", "Sweden", "DEF", 74, 21000);
    Football_Player Shackleton("Shackleton", "Jamie", "Leeds United", "England", "MID", 74, 22000);
    Football_Player Forshaw("Forshaw", "Adam", "Leeds United", "England", "MID", 75, 23000);
    Football_Player Roberts("Roberts", "Tyler", "Leeds United", "Wales", "ATT", 75, 23000);

    Leeds.addPlayer(Klaesson);
    Leeds.addPlayer(Cooper);
    Leeds.addPlayer(Llorente);
    Leeds.addPlayer(Davis2);
    Leeds.addPlayer(Shackleton);
    Leeds.addPlayer(Forshaw);
    Leeds.addPlayer(Roberts);

    Team Burnley("Burnley");

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

    Burnley.addPlayer(Pope);
    Burnley.addPlayer(Lowton);
    Burnley.addPlayer(Tarkowski);
    Burnley.addPlayer(Mee);
    Burnley.addPlayer(Taylor);
    Burnley.addPlayer(Brownhill);
    Burnley.addPlayer(Westwood);
    Burnley.addPlayer(McNeil);
    Burnley.addPlayer(Cornet);
    Burnley.addPlayer(Lennon);
    Burnley.addPlayer(Wood);

    // Substitutes
    Football_Player PeacockFarrell("Peacock-Farrell", "Bailey", "Burnley", "Northern Ireland", "GK", 72, 20000);
    Football_Player Pieters("Pieters", "Erik", "Burnley", "Netherlands", "DEF", 74, 21000);
    Football_Player Collins("Collins", "Nathan", "Burnley", "England", "DEF", 72, 20000);
    Football_Player Bardsley("Bardsley", "Phil", "Burnley", "England", "DEF", 73, 21000);
    Football_Player Cork("Cork", "Jack", "Burnley", "England", "MID", 75, 22000);
    Football_Player Stephens2("Stephens", "Dale", "Burnley", "England", "MID", 72, 20000);
    Football_Player Richardson("Richardson", "Lewis", "Burnley", "England", "ATT", 72, 20000);

    Burnley.addPlayer(PeacockFarrell);
    Burnley.addPlayer(Pieters);
    Burnley.addPlayer(Collins);
    Burnley.addPlayer(Bardsley);
    Burnley.addPlayer(Cork);
    Burnley.addPlayer(Stephens2);
    Burnley.addPlayer(Richardson);

    Team Watford("Watford");

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

    Watford.addPlayer(Bachmann);
    Watford.addPlayer(Femenia);
    Watford.addPlayer(TroostEkong);
    Watford.addPlayer(Cathcart);
    Watford.addPlayer(Masina);
    Watford.addPlayer(Cleverley);
    Watford.addPlayer(Louza);
    Watford.addPlayer(Sissoko);
    Watford.addPlayer(Sarr2);
    Watford.addPlayer(Dennis);
    Watford.addPlayer(King);

    // Substitutes
    Football_Player Foster("Foster", "Ben", "Watford", "England", "GK", 76, 23000);
    Football_Player Ngakia("Ngakia", "Jeremy", "Watford", "England", "DEF", 70, 20000);
    Football_Player Sierralta("Sierralta", "Francisco", "Watford", "Chile", "DEF", 74, 21000);
    Football_Player Kabasele("Kabasele", "Christian", "Watford", "Belgium", "DEF", 73, 20000);
    Football_Player Gosling("Gosling", "Dan", "Watford", "England", "MID", 73, 20000);
    Football_Player Hernández("Hernández", "Cucho", "Watford", "Colombia", "ATT", 75, 22000);
    Football_Player Fletcher("Fletcher", "Ashley", "Watford", "England", "ATT", 72, 19000);

    Watford.addPlayer(Foster);
    Watford.addPlayer(Ngakia);
    Watford.addPlayer(Sierralta);
    Watford.addPlayer(Kabasele);
    Watford.addPlayer(Gosling);
    Watford.addPlayer(Hernández);
    Watford.addPlayer(Fletcher);

    Team Norwich("Norwich");

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

    Norwich.addPlayer(Krul);
    Norwich.addPlayer(Aarons);
    Norwich.addPlayer(Hanley);
    Norwich.addPlayer(Gibson);
    Norwich.addPlayer(Giannoulis);
    Norwich.addPlayer(Gilmour);
    Norwich.addPlayer(McLean);
    Norwich.addPlayer(Cantwell);
    Norwich.addPlayer(Rashica);
    Norwich.addPlayer(Pukki);
    Norwich.addPlayer(Idah);

    // Substitutes
    Football_Player Gunn("Gunn", "Angus", "Norwich City", "England", "GK", 73, 21000);
    Football_Player Omobamidele("Omobamidele", "Andrew", "Norwich City", "Ireland", "DEF", 70, 20000);
    Football_Player Sorensen("Sorensen", "Jakob", "Norwich City", "Denmark", "DEF", 71, 20000);
    Football_Player Rupp("Rupp", "Marco", "Norwich City", "Germany", "MID", 73, 21000);
    Football_Player LeesMelou("Lees-Melou", "Pierre", "Norwich City", "France", "MID", 73, 21000);
    Football_Player Dowell("Dowell", "Kieran", "Norwich City", "England", "MID", 72, 20000);
    Football_Player Sargent("Sargent", "Josh", "Norwich City", "USA", "ATT", 74, 22000);

    Norwich.addPlayer(Gunn);
    Norwich.addPlayer(Omobamidele);
    Norwich.addPlayer(Sorensen);
    Norwich.addPlayer(Rupp);
    Norwich.addPlayer(LeesMelou);
    Norwich.addPlayer(Dowell);
    Norwich.addPlayer(Sargent);

    // am initializat echipele, cu jucatorii lor.

    std::vector<FUT_Player> players;

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

    // am initializat jucatorii de FUT.
    std::string fut_player_username;
    int balance;
    log_in(players, balance, fut_player_username);
    int teamvalue = 0;
    int teamoverall = 0;
    // dupa ce utilizatorul s-a logat cu succes, isi alege formatia, cu jucatori pe care ii va avea stocati in vectorul fut_player_team.
    std::vector<Football_Player> fut_player_team = {};
    int fundasi, mijlocasi, atacanti;
    Choose_Formation(fundasi, mijlocasi, atacanti);
    bool ok = false;
    std::string key;
    while (!ok)
    {
        std::cout << "Let's start with the goalkeeper. Select the team he's currently playing for: " << std::endl;
        PremierLeagueTeams();
        std::cin >> key;
        if (isNumber(key) == true)
        {
            std::cin.ignore();
            switch (stoi(key))
            {
            case (1):
            {
                Choose_Goalkeeper(Tottenham, fut_player_team, balance, teamvalue, teamoverall, ok);
                break;
            }
            case (2):
            {
                Choose_Goalkeeper(ManchesterCity, fut_player_team, balance, teamvalue, teamoverall, ok);
                break;
            }
            case (3):
            {
                Choose_Goalkeeper(Chelsea, fut_player_team, balance, teamvalue, teamoverall, ok);
                break;
            }
            case (4):
            {
                Choose_Goalkeeper(ManchesterUnited, fut_player_team, balance, teamvalue, teamoverall, ok);
                break;
            }
            case (5):
            {
                Choose_Goalkeeper(Liverpool, fut_player_team, balance, teamvalue, teamoverall, ok);
                break;
            }

            case (6):
            {
                Choose_Goalkeeper(Arsenal, fut_player_team, balance, teamvalue, teamoverall, ok);
                break;
            }
            case (7):
            {
                Choose_Goalkeeper(Leicester, fut_player_team, balance, teamvalue, teamoverall, ok);
                break;
            }
            case (8):
            {
                Choose_Goalkeeper(WestHam, fut_player_team, balance, teamvalue, teamoverall, ok);
                break;
            }
            case (9):
            {
                Choose_Goalkeeper(Brighton, fut_player_team, balance, teamvalue, teamoverall, ok);
                break;
            }
            case (10):
            {
                Choose_Goalkeeper(Wolves, fut_player_team, balance, teamvalue, teamoverall, ok);
                break;
            }
            case (11):
            {
                Choose_Goalkeeper(Newcastle, fut_player_team, balance, teamvalue, teamoverall, ok);
                break;
            }
            case (12):
            {
                Choose_Goalkeeper(CrystalPalace, fut_player_team, balance, teamvalue, teamoverall, ok);
                break;
            }
            case (13):
            {
                Choose_Goalkeeper(Brentford, fut_player_team, balance, teamvalue, teamoverall, ok);
                break;
            }
            case (14):
            {
                Choose_Goalkeeper(AstonVilla, fut_player_team, balance, teamvalue, teamoverall, ok);
                break;
            }
            case (15):
            {
                Choose_Goalkeeper(Southampton, fut_player_team, balance, teamvalue, teamoverall, ok);
                break;
            }
            case (16):
            {
                Choose_Goalkeeper(Everton, fut_player_team, balance, teamvalue, teamoverall, ok);
                break;
            }
            case (17):
            {
                Choose_Goalkeeper(Leeds, fut_player_team, balance, teamvalue, teamoverall, ok);
                break;
            }
            case (18):
            {
                Choose_Goalkeeper(Burnley, fut_player_team, balance, teamvalue, teamoverall, ok);
                break;
            }
            case (19):
            {
                Choose_Goalkeeper(Norwich, fut_player_team, balance, teamvalue, teamoverall, ok);
                break;
            }
            case (20):
            {
                Choose_Goalkeeper(Watford, fut_player_team, balance, teamvalue, teamoverall, ok);
                break;
            }

            default:
            {
                std::cout << "You have to choose a number between 1 and 20. Try again." << std::endl;
                break;
            }
            }
        }
        else
            std::cout << key << " is not a number. Try again." << std::endl;
    }
    for (int i = 1; i <= fundasi; i++)
    {
        ok = false;
        while (!ok)
        {
            std::cout << "Defender number " << i << ". Select the team he's currently playing for: " << std::endl;
            PremierLeagueTeams();
            std::cin >> key;
            if (isNumber(key) == true)
            {
                std::cin.ignore();
                switch (stoll(key))
                {
                case (1):
                {
                    Choose_Defender(Tottenham, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (2):
                {
                    Choose_Defender(ManchesterCity, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (3):
                {
                    Choose_Defender(Chelsea, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (4):
                {
                    Choose_Defender(ManchesterUnited, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (5):
                {
                    Choose_Defender(Liverpool, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }

                case (6):
                {
                    Choose_Defender(Arsenal, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (7):
                {
                    Choose_Defender(Leicester, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (8):
                {
                    Choose_Defender(WestHam, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (9):
                {
                    Choose_Defender(Brighton, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (10):
                {
                    Choose_Defender(Wolves, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (11):
                {
                    Choose_Defender(Newcastle, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (12):
                {
                    Choose_Defender(CrystalPalace, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (13):
                {
                    Choose_Defender(Brentford, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (14):
                {
                    Choose_Defender(AstonVilla, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (15):
                {
                    Choose_Defender(Southampton, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (16):
                {
                    Choose_Defender(Everton, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (17):
                {
                    Choose_Defender(Leeds, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (18):
                {
                    Choose_Defender(Burnley, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (19):
                {
                    Choose_Defender(Norwich, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (20):
                {
                    Choose_Defender(Watford, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }

                default:
                {
                    std::cout << "You have to choose a number between 1 and 20. Try again." << std::endl;
                    break;
                }
                }
            }
            else
                std::cout << key << " is not a number. Try again." << std::endl;
        }
    }

    for (int i = 1; i <= mijlocasi; i++)
    {
        ok = false;
        while (!ok)
        {
            std::cout << "Midfielder number " << i << ". Select the team he's currently playing for: " << std::endl;
            PremierLeagueTeams();
            std::cin >> key;
            if (isNumber(key) == true)
            {
                std::cin.ignore();
                switch (stoll(key))
                {
                case (1):
                {
                    Choose_Midfielder(Tottenham, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (2):
                {
                    Choose_Midfielder(ManchesterCity, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (3):
                {
                    Choose_Midfielder(Chelsea, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (4):
                {
                    Choose_Midfielder(ManchesterUnited, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (5):
                {
                    Choose_Midfielder(Liverpool, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }

                case (6):
                {
                    Choose_Midfielder(Arsenal, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (7):
                {
                    Choose_Midfielder(Leicester, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (8):
                {
                    Choose_Midfielder(WestHam, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (9):
                {
                    Choose_Midfielder(Brighton, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (10):
                {
                    Choose_Midfielder(Wolves, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (11):
                {
                    Choose_Midfielder(Newcastle, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (12):
                {
                    Choose_Midfielder(CrystalPalace, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (13):
                {
                    Choose_Midfielder(Brentford, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (14):
                {
                    Choose_Midfielder(AstonVilla, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (15):
                {
                    Choose_Midfielder(Southampton, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (16):
                {
                    Choose_Midfielder(Everton, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (17):
                {
                    Choose_Midfielder(Leeds, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (18):
                {
                    Choose_Midfielder(Burnley, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (19):
                {
                    Choose_Midfielder(Norwich, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (20):
                {
                    Choose_Midfielder(Watford, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }

                default:
                {
                    std::cout << "You have to choose a number between 1 and 20. Try again." << std::endl;
                    break;
                }
                }
            }
            else
                std::cout << key << " is not a number. Try again." << std::endl;
        }
    }
    for (int i = 1; i <= atacanti; i++)
    {
        ok = false;
        while (!ok)
        {
            std::cout << "Attacker number " << i << ". Select the team he's currently playing for: " << std::endl;
            PremierLeagueTeams();
            std::cin >> key;
            if (isNumber(key) == true)
            {
                std::cin.ignore();
                switch (stoll(key))
                {
                case (1):
                {
                    Choose_Attacker(Tottenham, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (2):
                {
                    Choose_Attacker(ManchesterCity, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (3):
                {
                    Choose_Attacker(Chelsea, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (4):
                {
                    Choose_Attacker(ManchesterUnited, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (5):
                {
                    Choose_Attacker(Liverpool, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }

                case (6):
                {
                    Choose_Attacker(Arsenal, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (7):
                {
                    Choose_Attacker(Leicester, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (8):
                {
                    Choose_Attacker(WestHam, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (9):
                {
                    Choose_Attacker(Brighton, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (10):
                {
                    Choose_Attacker(Wolves, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (11):
                {
                    Choose_Attacker(Newcastle, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (12):
                {
                    Choose_Attacker(CrystalPalace, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (13):
                {
                    Choose_Attacker(Brentford, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (14):
                {
                    Choose_Attacker(AstonVilla, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (15):
                {
                    Choose_Attacker(Southampton, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (16):
                {
                    Choose_Attacker(Everton, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (17):
                {
                    Choose_Attacker(Leeds, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (18):
                {
                    Choose_Attacker(Burnley, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (19):
                {
                    Choose_Attacker(Norwich, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }
                case (20):
                {
                    Choose_Attacker(Watford, fut_player_team, balance, teamvalue, teamoverall, ok);
                    break;
                }

                default:
                {
                    std::cout << "You have to choose a number between 1 and 20. Try again." << std::endl;
                    break;
                }
                }
            }
            else
                std::cout << key << " is not a number. Try again." << std::endl;
        }
    }
    teamoverall /= 11;
    std::cout << fut_player_username << ", your team is valued at " << teamvalue << " coins and has an overall rating of " << teamoverall << "." << std::endl;
    return 0;
}