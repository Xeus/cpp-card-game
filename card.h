#pragma once

#include <string>

const int NUM_SUITS = 4;
const int NUM_RANKS = 13;
const std::string SUITS[] = {"D", "C", "H", "S"};
const std::string RANKS[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
const int ACE = 14;

class Card {
private:
    Card();
    static int card;
    std::string suit, rank;
    bool validRank, validSuit;
public:
    Card(std::string r, std::string s);
    std::string toString();
    int getNumValue();
};
