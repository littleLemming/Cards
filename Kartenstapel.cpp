#include "Kartenstapel.h"

void Kartenstapel::putCardOnStack(Karte k) {
    karten.push_front(k);
    mischen();
}
