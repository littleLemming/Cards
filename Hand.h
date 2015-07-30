#include <vector>
#include "Karte.h"

class Hand {
private:
	std::list<Karte> karten;
	int maxSize;
	int minSize;
public:
	Hand();
	Hand(int,int,std::vector<Karte>);
	~Hand();
	void addCard(Karte);
	Karte dropACard(void);
	bool dropCard(Karte);
	bool dropCard(int,int);
	bool hasCard(Karte);
	bool isValidHand(void);
	bool canDropCard(void);
	bool canAddCard(void);
	void toString(void);
	bool searchCard(int,int);
};
