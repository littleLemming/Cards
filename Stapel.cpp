//
// Created by twi on 02.08.15.
//

# include "Stapel.h"

#include <random>
#include <iterator>
#include <sstream>

const int SIZE = 52;

Stapel::Stapel(void) {

    for (int i = 1; i <= 4; i++) { // colors
        for (int j = 1; j <= 13; j++) { // numbers
            Karte k = Karte(j, i);
            karten.push_front(k);
        }
    }
    mischen();
}

Karte Stapel::takeCard(void) {
    Karte k = karten.front();
    karten.pop_front();
    return k;
}

std::vector<Karte> Stapel::makeVector() {
    std::vector<Karte> cards;
    while (!karten.empty()) {
        Karte k = karten.back();
        cards.push_back(k);
        karten.pop_back();
    }
    return cards;
}

void Stapel::makeList(std::vector<Karte> kartenH){
    for (int i = 0; i < kartenH.size(); i++) {
        karten.push_back(kartenH[i]);
    }
}

void Stapel::mischen() {

    std::vector<Karte> cards = makeVector();

    int x = 0;
    int y = 0;
    Karte temp;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0,SIZE-1);

    for (int i = 0; i < 500; i++) {
        x = dist(gen);
        y = dist(gen);
        while (x == y) {
            y = dist(gen);
        }
        temp = cards[x];
        cards[x] = cards[y];
        cards[y] = temp;
    }

    makeList(cards);

}

Stapel::~Stapel() {

}

std::string Stapel::toString(void) {
    std::list<Karte>::iterator i;
    std::ostringstream oss;
    for(i = karten.begin(); i != karten.end(); i++) {
        oss << i->toString() << "\n" << std::endl;
    }
    return oss.str();
}

void Stapel::putCardOnStack(Karte k) {
    karten.push_front(k);
}