#include "deck.h"

std::vector<card> deckOfCards;

deck::deck() {
  // Vector of suits
  std::vector<std::string> suits = {"Spades", "Hearts", "Diamonds", "Clubs"};
  // For each suit, add 13 cards to deckOfCards
  for (std::string suit : suits) {
    for (int val = 2; val <= 13; ++val) {
      card nextCard(val, suit);
      deckOfCards.push_back(nextCard);
    }
  }
}

void deck::shuffle() {
  std::random_shuffle(deckOfCards.begin(), deckOfCards.begin());
}

std::vector<card> deck::dealHand() {
  std::vector<card> hand;
  for (int i = 0; i < 13; ++i) {
    hand.push_back(deckOfCards.back());
    deckOfCards.pop_back();
  }
  return hand;
}
