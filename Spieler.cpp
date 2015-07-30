#include "Spieler.h"


Spieler::Spieler() : hand(nullptr)
{
}

Spieler::Spieler(std::string spielerName)
{
	name = spielerName;

}

void Spieler::dealCards(int minHandkarten,int maxHandkarten,std::vector<Karte> &karten){
	hand = new Hand(minHandkarten, maxHandkarten, karten);

}

std::string Spieler::toString(){
	return "Spieler " + name + hand->toString();
}

Spieler::~Spieler()
{
}
