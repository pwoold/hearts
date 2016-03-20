#ifndef CARD_H
#define CARD_H

#include <string>

class card
{
private:
	int value;
	std::string suit;

public:
	friend bool operator<(const card& a, const card& b);

	card();
	card(int value, std::string suit);
};

#endif