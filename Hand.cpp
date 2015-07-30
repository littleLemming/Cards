#include "Hand.h"

Hand::Hand(int max,int min,std::list<Karte> hand) {
	if(hand.size() <= max && hand.size() >= min) {
		maxSize = max;
		minSize = min;
		karten = hand;
	}
}

void Hand::addCard(Karte k) {

}

Karte Hand::dropACard(void) {

}
	
bool Hand::dropCard(Karte) {

}

bool Hand::hasCard(Karte) {

}

bool Hand::isValidHand(void) {

}

bool Hand::canDropCard(void) {

}

bool Hand::canAddCard(void) {

}

bool Hand::canAddCard(void) {

}

void Hand::toString(void) {

}

bool Hand::searchCard(int color, int num) {
	
}

Hand::~Hand() {
}
