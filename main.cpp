#include <iostream>
#include <cmath>

using namespace std;

extern int *shuffleDeck();
extern int *handDraw(int* deck, int choice);

int main() {

    int *deck = shuffleDeck();

    int choice = 1; // player
    int *playerHand = handDraw(deck, choice);

    choice = 2; // dealer
    int *dealerHand = handDraw(deck, choice);

    return 0;

}