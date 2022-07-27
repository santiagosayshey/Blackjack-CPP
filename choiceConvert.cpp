// this function converts yes/no to bool

#include <iostream>

using namespace std;

bool choiceConvert() {

    char choice;
    cin >> choice;

    choice = tolower(choice);

    switch(choice) {
        case 'y': 
            choice = true;
            break;

        case 'n':
            choice = false;
            break;
    }

    return choice;
}