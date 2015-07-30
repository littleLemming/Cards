/*
g++ -std=c++11 filename.cpp 
g++ -std=c++11 -Wall -O3 -pedantic-errors filename.cpp -o applicationname 
*/

#include <iostream>

#include "Karte.h"
#include "Kartenstapel.h"


//Karte* karte;
Kartenstapel* kartenstapel;


int main() {
	//karte = new Karte(5, 5);
	//karte->toString();
	kartenstapel = new Kartenstapel();
	kartenstapel->takeCard().toString();
	kartenstapel->takeCard().toString();
	kartenstapel->takeCard().toString();
}
