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

	bool dealCards(int,int,std::vector<Karte>&);
};

