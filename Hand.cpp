#include "Hand.h"
#include <random>

Hand::Hand() {

}

Hand::Hand(int min,int max,std::vector<Karte> hand) {
	if(hand.size() <= max && hand.size() >= min) {
		maxSize = max;
		minSize = min;
		karten = hand;
	}
}

void Hand::addCard(Karte k) {
	karten.push_back(k);
}

Karte Hand::dropACard(void) {
	random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0,karten.size()-1);
    i = dist(gen);
    k = karten[i];
    karten.erase(i);
    return k;
}
	
bool Hand::dropCard(Karte) {

}

bool dropCard(int color,int number) {

}

bool Hand::hasCard(Karte) {

}

bool Hand::isValidHand(void) {

}

bool Hand::canDropCard(void) {

}

bool Hand::canAddCard(void) {

}

void Hand::toString(void) {

}

bool Hand::searchCard(int color, int num) {

}

Hand::~Hand() {
}
