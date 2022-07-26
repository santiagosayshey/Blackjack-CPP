#include <iostream>

using namespace std;

extern int *shuffleDeck();

int main() {

    int *deck = shuffleDeck();

    for (int i = 0; i < 52; i++) {
        cout << deck[i] << endl;
    }

    return 0;
}