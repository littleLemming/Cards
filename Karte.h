#ifndef KARTE_H
#define KARTE_H

#include <iostream>
#include <string> 
using namespace std;

class Karte {
public:
	Karte();
	Karte(int, int);
	~Karte();
	bool equals(Karte);
	void toString();
	int getNum();
	int getColor();
private:
	int num; // 1 - ass, 2-10, 11-13 - junge, königin und könig
	int color; // 1 - karo, 2 - herz, 3 - pik, 4 - kreuz
};

#endif