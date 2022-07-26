// this function determin who wins 

#include <iostream>

using namespace std;

void winState(int playerScore, int dealerScore) {

    static int win=0, loss=0, tie=0;

    if (playerScore > 21) { 
        cout << "Bust! The Dealer Wins!" << endl;
        loss += 1;
    }
    else if (dealerScore > 21) {
        cout << "Player Wins!" << endl;
        win += 1;
    }
    else if (playerScore > dealerScore) {
        cout << "Player Wins!" << endl;
        win += 1;
        if (playerScore == 21) {
            cout << "Blackjack!" << endl;
        }
    }
    else if (dealerScore == playerScore) {
        cout << "It's a tie!" << endl;
        tie += 1;
    }
    else {
        cout << "The Dealer Wins!" << endl;
        loss += 1;
    }
}