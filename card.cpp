#include "card.h"

card::card() {}

card::card(int val, std::string st) : value(val), suit(st) {}

bool operator<(const card& a, const card& b) {
  if (a.suit == b.suit) {
    if (a.value < b.value) {
      return true;
    }

    else {
      return false;
    }
  }

  else if (a.suit == "Clubs") {
    return true;
  }

  else if (b.suit == "Clubs") {
    return false;
  }

  else if (a.suit == "Diamonds") {
    return true;
  }

  else if (b.suit == "Diamonds") {
    return false;
  }

  else if (a.suit == "Spades") {
    return true;
  }
  // a has to be hearts, and b cannot be hearts
  else {
    return false;
  }
}
