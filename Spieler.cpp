#include "Spieler.h"


Spieler::Spieler() : hand(nullptr)
{
}

Spieler::Spieler(std::string spielerName)
{
	name = spielerName;

}

bool Spieler::dealCards(int minHandkarten,int maxHandkarten,std::vector<Karte> &karten){
	hand = new Hand(minHandkarten, maxHandkarten, karten);

}

Spieler::~Spieler()
{
}
