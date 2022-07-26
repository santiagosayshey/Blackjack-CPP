// this function calculates the score for a hand

#include <iostream>

using namespace std;

extern int scorefinder(int i, int* hand, int score);

int playerComponent(int* hand) {
    bool add;
    int score, i, count;
    

    while (add == true && score <= 21) {

        cout << "You Drew: ";
        for (i=count ; i<count+1 ; i++) {
            score = scorefinder(i, hand, score);
        }
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