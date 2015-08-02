//
// Created by twi on 02.08.15.
//

#ifndef STAPEL_H
#define STAPEL_H

#include <vector>
#include <list>

#include "Karte.h"

class Stapel {
protected:
    std::list<Karte> karten;
    std::vector<Karte> makeVector(void);
    void makeList(std::vector<Karte>);
public:
    Stapel();
    ~Stapel();
    std::string toString(void);
    Karte takeCard(void);
    void putCardOnStack(Karte);
    void mischen(void);
};

#endif
