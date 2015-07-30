#include "Kartenstapel.h"
#include <random>

const int SIZE = 52;

Kartenstapel::Kartenstapel(void) {

	for (int i = 1; i <= 4; i++) { // colors
		for (int j = 1; j <= 13; j++) { // numbers
			Karte k = Karte(j, i);
			//k.toString();
			karten.push(k);
		}
	}
	mischen();
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
		//k.toString();
		karten.pop();
	}
	return cards;
}

void Kartenstapel::makeStack(std::vector<Karte> kartenH){
	for (auto i : kartenH) {
		//i.toString();
		karten.push(i);
	}
}

void Kartenstapel::mischen() {

	std::vector<Karte> cards = makeVector();
/*
	for (int i = 0; i < cards.size(); i++) {
		cards[i].toString();
	}
*/
	int x = 0;
	int y = 0;
	Karte temp;

	random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0,SIZE-1);

	for (int i = 0; i < 10; i++) {
		x = dist(gen);
		std::cout << "x: " << x << std::endl;
		y = dist(gen);
		std::cout << "y: " << y << std::endl;
		while (x == y) {
			y = dist(gen);
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

}

void Kartenstapel::mergeWithAblagestapel(Ablagestapel a) {

}

Kartenstapel::~Kartenstapel() {

}

void Kartenstapel::toString(void) {

}
