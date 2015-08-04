#ifndef SPIELER_H
#define SPIELER_H

#include <string>
#include <vector>

#include "Hand.h"
#include "Karte.h"


class Spieler
{
public:
	std::string name;
	Hand *hand;
	Spieler();
	Spieler(std::string);
	~Spieler();

	void dealCards(int,int,std::vector<Karte>&);
	std::string toString();
	void dropHand();
};

#endif