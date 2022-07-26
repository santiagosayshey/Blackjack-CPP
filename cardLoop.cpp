// this function calculates the score for a hand
#include <iostream>

using namespace std;

extern int scorefinder(int i, int* hand);

int cardLoop(int* hand) {


    int score = 0;
    int count = 0;
    int i;
    bool add;

    cout << "You Drew: " << endl;
    for (i=0 ; i<2 ; i++) {
        if (hand[i] == 1) {
            cout << "Ace" << " ";
            score += 1;
        }
        else if (hand[i] == 11) {
            cout << "King" << " ";
            score += 10;
        }
        else if (hand[i] == 12) {
            cout << "Queen" << " ";
            score += 10;
        }
        else if (hand[i] == 13) {
            cout << "Jack" << " ";
            score += 10;
        }
        else {
            cout << hand[i] << " ";
            score += hand[i];
        }
    }
    cout << endl;
    cout << "Score: " << score << endl;


    cout << "Would you like to hit? ";
    cin >> add;
    count=2;
    while (add == true && score <= 21) {
        cout << "You Drew: " << endl;
        for (i=count ; i<count+1 ; i++) {
            if (hand[i] == 1) {
                cout << "Ace" << " ";
                score += 1;
            }
            else if (hand[i] == 11) {
                cout << "King" << " ";
                score += 10;
            }
            else if (hand[i] == 12) {
                cout << "Queen" << " ";
                score += 10;
            }
            else if (hand[i] == 13) {
                cout << "Jack" << " ";
                score += 10;
            }
            else {
                cout << hand[i] << " ";
                score += hand[i];
            }
        }
        count += 1;

        cout << endl;
        cout << "Score: " << score << endl;
        if (score >= 21) {
            break;
        }

        cout << "Would you like to hit? ";
        cin >> add;
    }
    return score;
}