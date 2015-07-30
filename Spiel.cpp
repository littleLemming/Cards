#include "Spiel.h"

int MAX_PLAYERS;
int MIN_CARDS;
int MAX_CARDS;

Spiel::Spiel()
{
}

Spiel::Spiel(int maxSpieler,int minHandkarten,int maxHandkarten)
{
	MAX_PLAYERS = maxSpieler;
	MIN_CARDS = minHandkarten;
	MAX_PLAYERS = maxHandkarten;

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
