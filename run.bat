@echo off
g++ -c main.cpp -o obj/main.o
g++ -c src/footballplayer.cpp -o obj/footballplayer.o
g++ -c src/fut_player.cpp -o obj/fut_player.o
g++ -c src/teams.cpp -o obj/teams.o

g++ obj/main.o obj/footballplayer.o obj/fut_player.o obj/teams.o -o premier_league

premier_league

pause