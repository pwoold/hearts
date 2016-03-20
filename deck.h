#ifndef DECK_H
#define DECK_H

#include "card.h"
#include <vector>

class deck {
 private:
  std::vector<card> deckOfCards;

 public:
  deck();

  void shuffle();
  std::vector<card> dealHand();
};

#endif
