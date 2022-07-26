// this function creates a randomly shuffled 52 card deck array

#include <algorithm>
#include <iostream>

using namespace std;

int* shuffleDeck() {
    // initialise unshuffled deck
    static int deck[51];
    
    // declare pointer to deck array
    int* ptr = deck;

    // fill array
    for (int i = 0; i < 52; i++) {
        deck[i]=i+1;
    }

    // shuffle deck
    random_shuffle(ptr, ptr+52);

    return deck;
}
