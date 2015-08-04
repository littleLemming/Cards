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
    int i = dist(gen);
    Karte k = karten[i];
    karten.erase(karten.begin()+i);
    return k;
}
	
bool Hand::dropCard(Karte k) {
	if (hasCard(k)) {
		Karte x = k;
		int z = -1;
		for (int i = 0; i < karten.size(); i++) {
			if (karten[i].equals(k)) {
				z = i;
				break;
			}
		}
		karten.erase(karten.begin()+z);
		return true;
	}
	return false;
}

Karte Hand::dropCard(int color,int number) {
	Karte k = findCard(color,number);
	if (hasCard(color,number)) {
		Karte x = k;
		int z = -1;
		for (int i = 0; i < karten.size(); i++) {
			if (karten[i].getNum() == number && karten[i].getColor() == color) {
				z = i;
				break;
			}
		}
		karten.erase(karten.begin()+z);
		return k;
	}
	throw "noSuchCard";
}

bool Hand::hasCard(Karte k) {
	for (int i = 0; i < karten.size(); i++) {
		if (karten[i].equals(k)) {
			return true;
		}
	}
	return false;
}

bool Hand::hasCard(int color, int num) {
	for (int i = 0; i < karten.size(); i++) {
		if (karten[i].getNum() == num && karten[i].getColor() == color) {
			return true;
		}
	}
	return false;
}

Karte Hand::findCard(int color,int num) {
	for (int i = 0; i < karten.size(); i++) {
		if (karten[i].getNum() == num && karten[i].getColor() == color) {
			return karten[i];
		}
	}
	throw "noSuchCard";
}

bool Hand::isValidHand(void) {
	if (karten.size() >= minSize && karten.size() <= maxSize) {
		return true;
	}
	return false;

}

bool Hand::canDropCard(void) {
	if (karten.size() > minSize) {
		return true;
	}
	return false;
}

bool Hand::canAddCard(void) {
	if (karten.size() < maxSize) {
		return true;
	}
	return false;
}

std::string Hand::toString(void) {
	std:string ret;
	for (int i = 0; i < karten.size(); i++) {
		Karte temp = karten[i];
		ret += temp.toString();
	}
	return ret;
}

Hand::~Hand() {
}
