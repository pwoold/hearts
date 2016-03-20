#include <iostream>
#include "hand.h"

int main()
{
	card card1(7, "Spades");
	card card2(4, "Hearts");

	if (card1 < card2)
	{
		std::cout << "7 < 4" << std::endl;

		std::cin.get();
	}

	else
	{
		std::cout << "7 > 4" << std::endl;

		std::cin.get();
	}
}