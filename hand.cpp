#include <vector>
#include <algorithm>
#include "hand.h"

std::vector<card> cards;

hand::hand() {}

hand::hand(std::vector<card> crds) : cards(crds) {}

void hand::sort()
{
	std::sort(cards.begin(), cards.end());
}