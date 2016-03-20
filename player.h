#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "hand.h"

class player
{
private:
	int score;
	std::string name;
	hand playerHand;
	int position;

public:
	card playCard();
	std::vector<card> passCard();

	player();
	player(std::string name, int position);
};

#endif