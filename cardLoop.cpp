// this function calculates the score for a hand

#include <iostream>

using namespace std;

extern int scorefinder(int i, int* hand, int score);

int cardLoop(int* hand) {

    int score = 0, count = 0, i;
    bool add;

    cout << "You Drew: " << endl;
    for (i=0 ; i<2 ; i++) {
        score = scorefinder(i, hand, score);
    }
    count=2;
    cout << endl << "Score: " << score << endl;

    cout << "Would you like to hit? " << endl;
    cin >> add;
    
    while (add == true && score <= 21) {

        cout << "You Drew: " << endl;
        score = scorefinder(i, hand, score);
        count += 1;

        cout << endl << "Score: " << score << endl;

        if (score >= 21) {
            break;
        }

        cout << "Would you like to hit? ";
        cin >> add;
    }
    return score;
}