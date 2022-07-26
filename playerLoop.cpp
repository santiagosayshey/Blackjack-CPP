// this function scores the player's hand

#include <iostream>

using namespace std;

extern int scorefinder(int i, int* hand, int score, int count);

int playerLoop(int* hand) {

    int score=0, count=0, i;
    bool add=false;

    cout << "You Drew: ";
        for (i=0 ; i<2 ; i++) {
            score = scorefinder(i, hand, score, count);
        }
        cout << endl << "Score: "  << score << endl;
        count=2;
            if (score < 21) {
                cout << "Would you like to hit? ";
                cin >> add;
            }
    
    while (add == true && score <= 21) {

        cout << "You Drew: ";
        for (i=count ; i<count+1 ; i++) {
            score = scorefinder(i, hand, score, count);
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