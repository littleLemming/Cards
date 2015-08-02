#ifndef KARTENSTAPEL_H
#define KARTENSTAPEL_H

#include <vector>
#include <list>

#include "Karte.h"
#include "Ablagestapel.h"

class Kartenstapel {
private:
	std::list<Karte> karten;
	std::vector<Karte> makeVector(void);
	void makeList(std::vector<Karte>);
public:
	Kartenstapel();
	~Kartenstapel();
	std::string toString(void);
	Karte takeCard(void);
	// TODO:
	void mergeWithAblagestapel(Ablagestapel);
	void mischen(void);
};

#endif