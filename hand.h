#ifndef HAND_H
#define HAND_H

#include <vector>
#include "card.h"

class hand
{
public:
	std::vector<card> cards;
	void sort();
	hand();
	hand(std::vector<card> cards);
};

#endif
