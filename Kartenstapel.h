#include <vector>
#include <stack>

#include "Karte.h"
#include "Ablagestapel.h"

using namespace std;

class Kartenstapel {
private:
	std::stack<Karte> karten;
	std::vector<Karte> makeVector(void);
	void makeStack(std::vector<Karte>);
public:
	Kartenstapel();
	~Kartenstapel();
	void toString(void);
	Karte takeCard(void);
	Kartenstapel::mergeWithAblagestapel(Ablagestapel)
	void mischen(void);
};

