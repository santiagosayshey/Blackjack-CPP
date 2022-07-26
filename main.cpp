#include <iostream>
#include <cmath>

using namespace std;

extern int *shuffleDeck();
extern int *handDraw(int* deck, int choice);
extern void boardState(int *deck);
extern int playerLoop(int* hand); 
extern int dealerLoop(int* hand);
extern int *winState(int playerScore, int dealerScore);
extern bool choiceConvert();

int main() {
    int choice;
    int* hand;
    bool on = true;
    static int win=0, loss=0, tie=0;

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
        int *stats = winState(playerScore, dealerScore);

        cout << "Do you want to keep playing? WIN";
        on = choiceConvert();

    }
     
    return 0;
}

// aces count as 11 iff score + 11 < 22

// player always draws first and therefore loses if both player and dealer bust

/* player can only see the dealer's second card initially.
   once they have set their hand the dealer's hand is 
   revealed in full */
