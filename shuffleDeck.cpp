// this function creates a randomly shuffled 52 card deck array

#include <algorithm>
#include <random>
#include <chrono>

using namespace std;

int* shuffleDeck() {
    // initialise unshuffled deck
    static int deck[51];

    // fill array
    for (int i = 0; i < 52; i++) {
        deck[i]=i+1;
    }
    // get a time-based seed
    unsigned seed = chrono::system_clock::now()
                        .time_since_epoch()
                        .count();

    // declare pointer to deck array
    int* pDeck = deck;

    // shuffle deck
    shuffle(pDeck, pDeck+52, default_random_engine(seed));

    // convert to reference numbers
    for (int i = 0 ; i < 52 ; i++) {
        if (deck[i] > 13 && deck[i] < 27) {
            deck[i]=deck[i]-13;
        }
        else if (deck[i] > 26 && deck[i] < 40) {
            deck[i]=deck[i]-26;
        }
        else if (deck[i] > 39) {
            deck[i]=deck[i]-39;
        }
    }

    return deck;
}


    