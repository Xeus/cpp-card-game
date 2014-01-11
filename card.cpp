#include <iostream>
#include <cstdio>
#include "card.h"

using namespace std;

int Card::card = 0;

Card::Card(string r, string s) {
    rank = "-1";
    suit = "";
    validRank = validSuit = false;
    for (int i=0; i<NUM_SUITS; i++) {
        if (s == SUITS[i]) {
            suit = s;
            validSuit = true;
            break;
        }
    }
    for (int i=0; i<NUM_RANKS; i++) {
        if (r == RANKS[i]) {
            rank = r;
            validRank = true;
            break;
        }
    }
    if (validRank && validSuit)
        card++;
    else
        cout << "Invalid card.  Rank: " << r << ", Suit: " << s << endl;
};

string Card::toString() {
    return rank + " of " + suit;
}

int Card::getNumValue() {
    if (rank == "A")
        return ACE;
    else if (rank == "K")
        return 13;
    else if (rank == "Q")
        return 12;
    else if (rank == "J")
        return 11;
    else
        return atoi(rank.c_str());
}
