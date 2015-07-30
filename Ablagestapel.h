#include <stack>

#include "Karte.h"

class Ablagestapel
{
public:
	Ablagestapel();
	~Ablagestapel();
	void toString(void);
private:
	std::stack<Karte> abgelegteKarten;
	bool addCard(Karte karte);
};

