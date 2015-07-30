#include "Ablagestapel.h"


Ablagestapel::Ablagestapel()
{

}


Ablagestapel::~Ablagestapel()
{
}

bool Ablagestapel::addCard(Karte karte){
	abgelegteKarten.push(karte);

	return true;
}

void Ablagestapel::toString(void) {

}
