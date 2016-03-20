#ifndef CARD_H
#define CARD_H

#include <string>

class card
{
public:
	int value;
	std::string suit;
	card();
	card(int value, std::string suit);
	friend bool operator<(const card& a, const card& b);
};

#endif