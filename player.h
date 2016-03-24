#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <string>
#include "card.h"
#include "hand.h"

class player
{
private:
	int score;
	std::string name;
	hand userPlayerHand;
	int position;

public:
	virtual card playCard() = 0;
	virtual std::vector<card> passCard() = 0;

	player();
	player(std::string name, int position);
};

#endif