#include "Karte.h" 

Karte::Karte(void) {}

Karte::Karte(int newNum = 0, int newColor = 0){
	num = newNum;
	color = newColor;
}

Karte::~Karte(void) {}

void Karte::toString(){
	std::cout << "num: " << num << " color: " << color << std::endl;
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