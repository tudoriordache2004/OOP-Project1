#include <iostream>
#include <vector>
#include <cstring>
#include <conio.h>
#include <unistd.h>
#include "fut_teams.h"
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
    Football_Player Richarlison("Richarlison", "Tottenham", "Andrade", "Brazil", "ATT", 80, 7250);
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

    Team Chelsea("Chelsea");

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

    Chelsea.addPlayer(Mendy);
    Chelsea.addPlayer(James);
    Chelsea.addPlayer(Silva);
    Chelsea.addPlayer(Rudiger);
    Chelsea.addPlayer(Chilwell);
    Chelsea.addPlayer(Kante);
    Chelsea.addPlayer(Jorginho);
    Chelsea.addPlayer(Mount);
    Chelsea.addPlayer(Havertz);
    Chelsea.addPlayer(Werner);
    Chelsea.addPlayer(Lukaku);

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

    Team Liverpool("Liverpool");

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

    Liverpool.addPlayer(Alisson);
    Liverpool.addPlayer(AlexanderArnold);
    Liverpool.addPlayer(VanDijk);
    Liverpool.addPlayer(Matip);
    Liverpool.addPlayer(Robertson);
    Liverpool.addPlayer(Fabinho);
    Liverpool.addPlayer(Henderson);
    Liverpool.addPlayer(Thiago);
    Liverpool.addPlayer(Salah);
    Liverpool.addPlayer(Firmino);
    Liverpool.addPlayer(Mane);

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

    Team WestHam("West Ham United");

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

    WestHam.addPlayer(Fabianski);
    WestHam.addPlayer(Coufal);
    WestHam.addPlayer(Dawson);
    WestHam.addPlayer(Ogbonna);
    WestHam.addPlayer(Cresswell);
    WestHam.addPlayer(Rice);
    WestHam.addPlayer(Soucek);
    WestHam.addPlayer(Bowen);
    WestHam.addPlayer(Benrahma);
    WestHam.addPlayer(Antonio);
    WestHam.addPlayer(Lingard);

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

    Team CrystalPalace("Crystal Palace");

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

    CrystalPalace.addPlayer(Guaita);
    CrystalPalace.addPlayer(Ward);
    CrystalPalace.addPlayer(Kouyate);
    CrystalPalace.addPlayer(Andersen);
    CrystalPalace.addPlayer(Mitchell);
    CrystalPalace.addPlayer(Milivojevic);
    CrystalPalace.addPlayer(Gallagher);
    CrystalPalace.addPlayer(Eze);
    CrystalPalace.addPlayer(Ayew);
    CrystalPalace.addPlayer(Zaha);
    CrystalPalace.addPlayer(Olise);

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
    int balance;
    log_in(players, balance);
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
                Choose_Goalkeeper(Tottenham, fut_player_team, balance, teamvalue, teamoverall);
                ok = true;
                break;
            }
            case (2):
            {
                Choose_Goalkeeper(ManchesterCity, fut_player_team, balance, teamvalue, teamoverall);
                ok = true;
                break;
            }
            case (3):
            {
                Choose_Goalkeeper(Chelsea, fut_player_team, balance, teamvalue, teamoverall);
                ok = true;
                break;
            }
            case (4):
            {
                Choose_Goalkeeper(ManchesterUnited, fut_player_team, balance, teamvalue, teamoverall);
                ok = true;
                break;
            }
            case (5):
            {
                Choose_Goalkeeper(Liverpool, fut_player_team, balance, teamvalue, teamoverall);
                ok = true;
                break;
            }

            case (6):
            {
                Choose_Goalkeeper(Arsenal, fut_player_team, balance, teamvalue, teamoverall);
                ok = true;
                break;
            }
            case (7):
            {
                Choose_Goalkeeper(Leicester, fut_player_team, balance, teamvalue, teamoverall);
                ok = true;
                break;
            }
            case (8):
            {
                Choose_Goalkeeper(WestHam, fut_player_team, balance, teamvalue, teamoverall);
                ok = true;
                break;
            }
            case (9):
            {
                Choose_Goalkeeper(Brighton, fut_player_team, balance, teamvalue, teamoverall);
                ok = true;
                break;
            }
            case (10):
            {
                Choose_Goalkeeper(Wolves, fut_player_team, balance, teamvalue, teamoverall);
                ok = true;
                break;
            }
            case (11):
            {
                Choose_Goalkeeper(Newcastle, fut_player_team, balance, teamvalue, teamoverall);
                ok = true;
                break;
            }
            case (12):
            {
                Choose_Goalkeeper(CrystalPalace, fut_player_team, balance, teamvalue, teamoverall);
                ok = true;
                break;
            }
            case (13):
            {
                Choose_Goalkeeper(Brentford, fut_player_team, balance, teamvalue, teamoverall);
                ok = true;
                break;
            }
            case (14):
            {
                Choose_Goalkeeper(AstonVilla, fut_player_team, balance, teamvalue, teamoverall);
                ok = true;
                break;
            }
            case (15):
            {
                Choose_Goalkeeper(Southampton, fut_player_team, balance, teamvalue, teamoverall);
                ok = true;
                break;
            }
            case (16):
            {
                Choose_Goalkeeper(Everton, fut_player_team, balance, teamvalue, teamoverall);
                ok = true;
                break;
            }
            case (17):
            {
                Choose_Goalkeeper(Leeds, fut_player_team, balance, teamvalue, teamoverall);
                ok = true;
                break;
            }
            case (18):
            {
                Choose_Goalkeeper(Burnley, fut_player_team, balance, teamvalue, teamoverall);
                ok = true;
                break;
            }
            case (19):
            {
                Choose_Goalkeeper(Norwich, fut_player_team, balance, teamvalue, teamoverall);
                ok = true;
                break;
            }
            case (20):
            {
                Choose_Goalkeeper(Watford, fut_player_team, balance, teamvalue, teamoverall);
                ok = true;
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
                    Choose_Defender(Tottenham, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (2):
                {
                    Choose_Defender(ManchesterCity, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (3):
                {
                    Choose_Defender(Chelsea, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (4):
                {
                    Choose_Defender(ManchesterUnited, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (5):
                {
                    Choose_Defender(Liverpool, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }

                case (6):
                {
                    Choose_Defender(Arsenal, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (7):
                {
                    Choose_Defender(Leicester, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (8):
                {
                    Choose_Defender(WestHam, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (9):
                {
                    Choose_Defender(Brighton, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (10):
                {
                    Choose_Defender(Wolves, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (11):
                {
                    Choose_Defender(Newcastle, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (12):
                {
                    Choose_Defender(CrystalPalace, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (13):
                {
                    Choose_Defender(Brentford, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (14):
                {
                    Choose_Defender(AstonVilla, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (15):
                {
                    Choose_Defender(Southampton, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (16):
                {
                    Choose_Defender(Everton, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (17):
                {
                    Choose_Defender(Leeds, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (18):
                {
                    Choose_Defender(Burnley, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (19):
                {
                    Choose_Defender(Norwich, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (20):
                {
                    Choose_Defender(Watford, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
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
                    Choose_Midfielder(Tottenham, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (2):
                {
                    Choose_Midfielder(ManchesterCity, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (3):
                {
                    Choose_Midfielder(Chelsea, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (4):
                {
                    Choose_Midfielder(ManchesterUnited, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (5):
                {
                    Choose_Midfielder(Liverpool, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }

                case (6):
                {
                    Choose_Midfielder(Arsenal, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (7):
                {
                    Choose_Midfielder(Leicester, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (8):
                {
                    Choose_Midfielder(WestHam, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (9):
                {
                    Choose_Midfielder(Brighton, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (10):
                {
                    Choose_Midfielder(Wolves, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (11):
                {
                    Choose_Midfielder(Newcastle, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (12):
                {
                    Choose_Midfielder(CrystalPalace, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (13):
                {
                    Choose_Midfielder(Brentford, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (14):
                {
                    Choose_Midfielder(AstonVilla, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (15):
                {
                    Choose_Midfielder(Southampton, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (16):
                {
                    Choose_Midfielder(Everton, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (17):
                {
                    Choose_Midfielder(Leeds, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (18):
                {
                    Choose_Midfielder(Burnley, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (19):
                {
                    Choose_Midfielder(Norwich, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (20):
                {
                    Choose_Midfielder(Watford, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
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
                    Choose_Attacker(Tottenham, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (2):
                {
                    Choose_Attacker(ManchesterCity, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (3):
                {
                    Choose_Attacker(Chelsea, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (4):
                {
                    Choose_Attacker(ManchesterUnited, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (5):
                {
                    Choose_Attacker(Liverpool, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }

                case (6):
                {
                    Choose_Attacker(Arsenal, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (7):
                {
                    Choose_Attacker(Leicester, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (8):
                {
                    Choose_Attacker(WestHam, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (9):
                {
                    Choose_Attacker(Brighton, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (10):
                {
                    Choose_Attacker(Wolves, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (11):
                {
                    Choose_Attacker(Newcastle, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (12):
                {
                    Choose_Attacker(CrystalPalace, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (13):
                {
                    Choose_Attacker(Brentford, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (14):
                {
                    Choose_Attacker(AstonVilla, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (15):
                {
                    Choose_Attacker(Southampton, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (16):
                {
                    Choose_Attacker(Everton, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (17):
                {
                    Choose_Attacker(Leeds, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (18):
                {
                    Choose_Attacker(Burnley, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (19):
                {
                    Choose_Attacker(Norwich, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
                    break;
                }
                case (20):
                {
                    Choose_Attacker(Watford, fut_player_team, balance, teamvalue, teamoverall);
                    ok = true;
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
    return 0;
}