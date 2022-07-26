// this function creates a randomly shuffled 52 card deck array

#include <algorithm>
#include <random>
#include <chrono>

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
    // get a time-based seed
    unsigned seed = chrono::system_clock::now()
                        .time_since_epoch()
                        .count();
                        
    // shuffle deck
    shuffle(ptr, ptr+52, default_random_engine(seed));

    return deck;
}
