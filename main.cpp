#include <iostream>
#include <cmath>

using namespace std;

extern int *shuffleDeck();
extern int *handDraw(int* deck, int choice);
extern int playerComponent(int* hand);
extern int dealerComponent(int* hand);

int main() {

    int choice;
    int *hand;

    // shuffle the deck
    int *deck = shuffleDeck();

    // intial dealer output
    int temp = deck[3];
    switch (temp) {
        default: {
            cout << "Dealer drew: ? " << temp << endl;
            break;
        }
        case 11: {
            cout << "Dealer drew: ? " << "King" << endl;
            break;
        }
        case 12: {
            cout << "Dealer drew: ? " << "Queen" << endl;
            break;
        }
        case 13: {
            cout << "Dealer drew: ? " << "Jack" << endl;
            break;
        }
        case 1: {
            cout << "Dealer drew: ? " << "Ace" << endl;
            break;
        }
    }

    // player component
    choice = 1; 
    hand = handDraw(deck, choice);
    int playerCount = playerComponent(hand);

    // dealer component
    choice = 2;
    hand = handDraw(deck, choice);
    int dealerCount = dealerComponent(hand);

    return 0;

}