// this function collates dealer functions

#include <iostream>

using namespace std;

extern int scorefinder(int i, int* hand, int score);

int dealerComponent(int* hand) {
    bool add;
    int score, i, count;

    while (score <= 17) {

        for (i=count ; i<count+1 ; i++) {
            score = scorefinder(i, hand, score);
        }
        count += 1;

    }
    cout << endl << "Score: " << score << endl;

    return score;
}
