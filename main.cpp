#include <iostream>
#include <cmath>

using namespace std;

extern int *shuffleDeck();
extern int *handDraw(int* deck, int choice);
extern void boardState(int *deck);
extern int playerLoop(int* hand); 
extern int dealerLoop(int* hand);
extern void winState(int playerScore, int dealerScore);

int main() {
    int choice;
    int* hand;
    bool on = true;

    while (on == true) {

        // clear the terminal
        system("clear");

        // shuffle the deck
        int *deck = shuffleDeck();

        // dealer inital output
        boardState(deck);

        // player loop
        choice = 1; 
        hand = handDraw(deck, choice);
        int playerScore = playerLoop(hand);


        // dealer loop
        choice = 2;
        hand = handDraw(deck, choice);
        int dealerScore = dealerLoop(hand);

        // win state
        winState(playerScore, dealerScore);

        cout << "Do you want to keep playing? ";
        cin>> on;

    }

    return 0;

}