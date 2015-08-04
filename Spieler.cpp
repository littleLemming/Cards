#include "Spieler.h"


Spieler::Spieler() : hand(nullptr) {
}

Spieler::Spieler(std::string spielerName) {
	name = spielerName;

}

void Spieler::dealCards(int minHandkarten,int maxHandkarten,std::vector<Karte> &karten) {
	if (!hand) hand = new Hand(minHandkarten, maxHandkarten, karten);
}

std::string Spieler::toString() {
	return "Spieler " + name + hand->toString();
}

Spieler::~Spieler() {
	if (hand) delete hand;
}

void Spieler::dropHand() {

}
