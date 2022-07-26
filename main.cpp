#include <iostream>
#include <cmath>

using namespace std;

extern int *shuffleDeck();
extern int *handDraw(int* deck, int choice);
extern int playerComponent(int* hand);
extern int dealerComponent(int* hand);
extern int boardState(int *deck, int *hand, int choice);

int main() {

    int choice;
    int *hand;

    // shuffle the deck
    int *deck = shuffleDeck();

    // player component
    choice = 1; 
    hand = handDraw(deck, choice);
    int playerCount = boardState(deck, hand, choice);
    
            cout << "Would you like to hit? ";
            cin >> add;
    // dealer component
    choice = 2;
    hand = handDraw(deck, choice);
    int dealerCount = boardState(deck, hand, choice);

    return 0;

}