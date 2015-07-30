#include <list>
#include "Karte.h"

class Hand {
private:
	std::list<Karte> karten;
	int maxSize;
	int minSize;
public:
	Hand(int,int,std::list<Karte>);
	~Hand();
	bool addCard(Karte);
	Karte dropACard(void);
	bool dropCard(Karte);
	bool hasCard(Karte);
	bool isValidHand(void);
	bool canDropCard(void);
	bool canAddCard(void);
	bool canAddCard(void);
	void toString(void);
	bool searchCard(int,int);
};
