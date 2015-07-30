#include "Hand.h"

Hand::Hand(int max,int min,std::list<Karte> hand) {
	if(hand.size() <= max && hand.size() >= min) {
		maxSize = max;
		minSize = min;
		karten = hand;
	}
}



Hand::~Hand() {
}
