#include "deck.h"
#include <cstdlib>
#include <algorithm>

using namespace std;

Deck::Deck() {
    for (int i=0; i<NUM_SUITS; i++) {
        for (int j=0; j<NUM_RANKS; j++) {
            Card c(RANKS[j], SUITS[i]);
            cards.push_back(c);
        }
    }
    shuffle();
}

void Deck::shuffle() {
    std::srand(std::time(0));
    random_shuffle(cards.begin(), cards.end());
}

int Deck::printCards() {
    for (vector<Card>::iterator it=cards.begin(); it!=cards.end(); ++it) {
        std::cout << it->toString() << endl;
    }
    return 0;
}

int Deck::count() {
    return cards.size();
}