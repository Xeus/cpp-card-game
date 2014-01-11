#include <cstdlib>
#include <iostream>
#include "card.h"
#include "deck.h"

using namespace std;

int tests() {
    Card c1("10", "S");
    if (c1.getNumValue() == 10) {
        cout << "OK: " << c1.toString() << endl;
    }
    else {
        cout << "FAIL: c1" << endl;
    }

    Card c2("A", "S");
    if (c2.getNumValue() == 14) {
        cout << "OK: " << c2.toString() << endl;
    }
    else {
        cout << "FAIL: c2" << endl;
    }

    Card c3("L", "S");
    if (c3.getNumValue() == 1) {
        cout << "OK: " << c3.toString() << endl;
    }
    else {
        cout << "FAIL: c3" << endl;
    }

    Deck d;
    d.printCards();
    if (d.count() == NUM_CARDS) {
        cout << "OK: Deck contains " << NUM_CARDS << " cards.";
    }
    else {
        cout << "FAIL: Deck should have " << NUM_CARDS << " but only has " << d.count() << ".";
    }
}

int main(int argc, char** argv) {
    tests();
    return 0;
}
