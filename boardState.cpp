// takes in an int parameter and outputs a board state specific to that parameter

#include <iostream>

using namespace std;

extern int scorefinder(int i, int* hand, int score);

int boardState(int *deck, int *hand, int choice) {
    switch (choice) {
        case 1: { // player 
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
            int score = 0, count = 0, i;
            bool add;

            cout << "You Drew: ";
            for (i=0 ; i<2 ; i++) {
                score = scorefinder(i, hand, score);
            }
            count=2;
            cout << endl << "Score: " << score << endl;
            return score;
        }


        case 2: { // dealer
            int score = 0, count = 0, i;
            bool add;

            cout << "Dealer drew: ";

            for (i=0 ; i<2 ; i++) {
                score = scorefinder(i, hand, score);
            }
            count=2;
            return score;
        }

    }
    return 0;
}