#ifndef HAND_H
#define HAND_H

#include <vector>
#include "Karte.h"

class Hand {
private:
	std::vector<Karte> karten;
	int maxSize;
	int minSize;
public:
	Hand();
	Hand(int,int,std::vector<Karte>);
	~Hand();
	void addCard(Karte);
	Karte dropACard(void);
	bool dropCard(Karte);
	Karte dropCard(int,int);
	bool hasCard(Karte);
	bool hasCard(int,int);
	Karte findCard(int,int);
	bool isValidHand(void);
	bool canDropCard(void);
	bool canAddCard(void);
	std::string toString(void);
};

#endif