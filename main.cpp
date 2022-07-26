#include <iostream>
#include <cmath>

using namespace std;

extern int *shuffleDeck();

int main() {

    int *deck = shuffleDeck();

    for (int i=0 ; i < 52; i++) {
        cout << deck[i] << endl;
    }
    cout << "\n \n \n" << endl;

    static int playerHand[26], dealerHand[26];

    for (int i=0 ; i < 52; i++) {

        // assign to dealer / player in advance
        if (i%2 == 0) {
            playerHand[i/2]=deck[i]; 
        }
        else {
            dealerHand[((i/2))]=deck[i];
        }
        
    }

    for (int i=0 ; i < 26; i++) {
        cout << playerHand[i] << endl;
        cout << dealerHand[i] << endl;
    }

    return 0;
}