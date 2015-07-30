#include <list>

class Hand {
private:
	std::list<Karte> karten;
	int maxSize;
	int minSize;
public:
	Hand(int,int);
	Hand(int,int,std::list<Karte>);
	~Hand();
};

