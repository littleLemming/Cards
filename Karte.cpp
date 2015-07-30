#include "Karte.h" 

#include <sstream>

Karte::Karte(void) {}

Karte::Karte(int newNum = 0, int newColor = 0){
	num = newNum;
	color = newColor;
}

Karte::~Karte(void) {}

std::string Karte::toString(){

	std::ostringstream oss;
	oss << "num: " << num << " color: " << color << std::endl;
	return oss.str();
}

int Karte::getNum() {
	return num;
}

int Karte::getColor() {
	return color;
}

bool Karte::equals(Karte k) {
	if (num == k.getNum() && color == k.getColor()) {
		return true;
	}
	return false;
}