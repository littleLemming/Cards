#include "Spiel.h"

int MAX_PLAYERS;

Spiel::Spiel()
{
}

Spiel::Spiel(int maxSpieler)
{
	MAX_PLAYERS = maxSpieler;
}

bool Spiel::addPlayer(Spieler spieler){
	if (spielers.size() < MAX_PLAYERS){
		spielers.push_back(spieler);
		return true;
	}
	else{
		return false;
	}
}

Spiel::~Spiel()
{
}
