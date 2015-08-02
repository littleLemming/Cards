#ifndef KARTENSTAPEL_H
#define KARTENSTAPEL_H

#include <vector>
#include <stack>

#include "Karte.h"
#include "Ablagestapel.h"

class Kartenstapel {
private:
	std::stack<Karte> karten;
	std::vector<Karte> makeVector(void);
	void makeStack(std::vector<Karte>);
public:
	Kartenstapel();
	~Kartenstapel();
	void toString(void);
	Karte takeCard(void);
	void mergeWithAblagestapel(Ablagestapel);
	void mischen(void);
};

#endif