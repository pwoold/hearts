#ifndef HAND_H
#define HAND_H

#include <vector>
#include "card.h"

class hand
{
private:
	std::vector<card> cards;

public:
	void sort();
	
	hand();
	hand(std::vector<card> cards);
};

#endif
