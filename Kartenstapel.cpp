#include "Kartenstapel.h"
#include <cstdlib>

const int SIZE = 52;

//std::stack<Karte> karten;

Kartenstapel::Kartenstapel(void) {

	for (int i = 1; i <= 4; i++) { // colors
		for (int j = 1; j <= 13; j++) { // numbers
			Karte k = Karte(j, i);
			//k.toString();
			karten.push(k);
		}
		mischen();
	}

}

Karte Kartenstapel::takeCard(void) {
	Karte k = karten.top();
	karten.pop();
	return k;
}

std::vector<Karte> Kartenstapel::makeVector() {
	std::vector<Karte> cards;
	while (karten.empty() == false) {
		Karte k = karten.top();
		cards.push_back(k);
		k.toString();
		karten.pop();
	}
	return cards;
}

void Kartenstapel::makeStack(std::vector<Karte> kartenH){
	for (auto i : kartenH) {
		karten.push(i);
	}
}

void Kartenstapel::mischen() {

	std::vector<Karte> cards = makeVector();

	for (int i = 0; i < cards.size(); i++) {
		cards[i].toString();
	}

	int x = 0;
	int y = 0;
	Karte temp;

	for (int i = 0; i < 1000; i++) {
		x = (rand() % SIZE) + 1;
		y = (rand() % SIZE) + 1;
		while (x == y) {
			y = (rand() % SIZE) + 1;
		}
		temp = cards[x];
		cards[x] = cards[y];
		cards[y] = temp;
	}
/*
	for (int i = 0; i < cards.size(); i++) {
		cards[i].toString();
	}
*/
	makeStack(cards);	
	// speicher freigeben irgendwie..

}

void Kartenstapel::putCardOnStack(Karte) {

}

Kartenstapel::~Kartenstapel() {

}

void Kartenstapel::toString(void) {

}