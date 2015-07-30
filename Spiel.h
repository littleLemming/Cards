#include <vector>

#include "Kartenstapel.h"
#include "Ablagestapel.h"
#include "Spieler.h"

class Spiel
{
public:
	Spiel();
	Spiel(int,int,int);
	~Spiel();
	bool addPlayer(Spieler);
private:
	Kartenstapel stapel;
	Ablagestapel ablage;

	std::vector<Spieler> spielers;

};

