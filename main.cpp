#include <iostream>
#include <cmath>

using namespace std;

extern int *shuffleDeck();
extern int *handDraw(int* deck, int choice);
extern int playerComponent(int* hand);

int main() {

    int choice;
    int *hand;

    // shuffle the deck
    int *deck = shuffleDeck();

    // player component
    choice = 1; 
    hand = handDraw(deck, choice);
    int playerCount = playerComponent(hand);

    // dealer component
    choice = 2;
    hand = handDraw(deck, choice);

    return 0;

}