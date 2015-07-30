#include <list>

class Hand {
private:
	std::list<Karte> karten;
	int maxSize;
	int minSize;
public:
	Hand(int,int,std::list<Karte>);
	~Hand();
	void addCards(Karte);
	void addCard(Karte);
};
