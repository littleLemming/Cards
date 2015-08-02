#ifndef KARTENSTAPEL_H
#define KARTENSTAPEL_H

#include "Stapel.h"

class Kartenstapel : public Stapel {
public:
	void putCardOnStack(Karte);
};

#endif