#include <iostream>
#include <cmath>

using namespace std;

extern int *shuffleDeck();
extern int *handDraw(int* deck, int choice);
extern void boardState(int *deck);
extern int playerLoop(int* hand); 
extern int dealerLoop(int* hand);

int main() {

    int choice;
    int *hand;

    // shuffle the deck
    int *deck = shuffleDeck();

    // dealer inital output
    boardState(deck);

    // player component
    choice = 1; 
    hand = handDraw(deck, choice);
    int playerCount = playerLoop(hand);


    // dealer component
    choice = 2;
    hand = handDraw(deck, choice);
    int dealerCount = dealerLoop(hand);

    return 0;

}