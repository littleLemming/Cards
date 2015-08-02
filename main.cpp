/*
g++ -std=c++11 filename.cpp 
g++ -std=c++11 -Wall -O3 -pedantic-errors filename.cpp -o applicationname 
*/

#include <iostream>
//#include <windows.h> wiktor du shit.

#include "Karte.h"
#include "Kartenstapel.h"
#include "Spiel.h"
#include "Spieler.h"

void handleInput();

//Karte* karte;
Kartenstapel* kartenstapel;
Spiel* spiel;
Spieler* spieler1;
Spieler* spieler2;
bool game_over = true;

int main() {
	//karte = new Karte(5, 5);
	//karte->toString();
	kartenstapel = new Kartenstapel();
	kartenstapel->takeCard().toString();
	kartenstapel->takeCard().toString();
	kartenstapel->takeCard().toString();

	//spiel = new Spiel(2,5,5);
	//spieler1 = new Spieler("Max");
	//spiel->addPlayer(spieler1);

	
	//spieler1->dealCards(5,5,);  hier kartenvector ald 3 argument übergeben


	while (!game_over){

		handleInput();

	}
}

void handleInput(){

}
