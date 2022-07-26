// this function scores the dealer's hand


#include <iostream>

using namespace std;

extern int scorefinder(int i, int* hand, int score);

int dealerLoop(int* hand) {

    int score=0, count=0, i;
    bool add;

    cout << "Dealer drew: ";
        for (i=0 ; i<2 ; i++) {
            score = scorefinder(i, hand, score);
        }
        count=2;

    while (score <= 17) {

        for (i=count ; i<count+1 ; i++) {
            score = scorefinder(i, hand, score);
        }
        count += 1;

    }
    cout << endl << "Score: " << score << endl;

    return score;
}
