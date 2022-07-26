// this function assigns a score to each face card

#include <iostream>

using namespace std;

int scorefinder(int i, int* hand, int score) {

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

    return score;
}

