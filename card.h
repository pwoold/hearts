#ifndef CARD_H
#define CARD_H

#include <string>

class card {
  int value;
  std::string suit;

 public:
  card();
  card(int value, std::string suit);
};

#endif
