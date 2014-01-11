#pragma once

#include <iostream>
#include "card.h"
#include <vector>
#include <string>

const int NUM_CARDS = 52;
const int NUM_DECKS = 1;

class Deck {
private:
    Card peek();
    std::vector<Card> cards;
public:
    Deck();
    void shuffle();
    // Hand* dealAll();
    Card dealOne();
    int count();
    void burnCard();
    int printCards();
};
