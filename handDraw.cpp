// this function allocates cards to a hand from a shuffled deck

#include <iostream>
#include <cmath>

using namespace std;

int* handDraw(int* deck, int choice) {

    static int hand[26];

    // player
    if (choice == 1) {
        for (int i=0 ; i < 52; i++) {
            if (i%2 == 0) {
                hand[i/2]=deck[i]; 
            }
        }
    }

    // dealer
    else if (choice == 2) {
        for (int i=0 ; i < 52; i++) {
            if (i%2 != 0) {
                hand[i/2]=deck[i]; 
            }
        }
    }
    
    return hand;
}