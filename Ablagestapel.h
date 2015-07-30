#include <stack>

#include "Karte.h"

class Ablagestapel
{
public:
	Ablagestapel();
	~Ablagestapel();
private:
	std::stack<Karte> karten;
};

