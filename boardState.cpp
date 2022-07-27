// takes in an int parameter and outputs a board state specific to that parameter

#include <iostream>

using namespace std;

void boardState(int *deck) {
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
}
