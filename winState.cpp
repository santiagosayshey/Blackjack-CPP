// this function determin who wins 

#include <iostream>

using namespace std;

void winState(int playerScore, int dealerScore) {


    if (playerScore > 21) { 
        cout << "Bust! The Dealer Wins!" << endl;
    }
    else if (dealerScore > 21) {
        cout << "Player Wins!" << endl;
    }
    else if (playerScore > dealerScore) {
        cout << "Player Wins!" << endl;
        if (playerScore == 21) {
            cout << "Blackjack!" << endl;
        }
    }
    else if (dealerScore == playerScore) {
        cout << "It's a tie!" << endl;
    }
    else {
        cout << "The Dealer Wins!" << endl;
    }
}