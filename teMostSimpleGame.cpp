#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

int main() {
    srand(time(NULL));
    int randomNum {rand() % 10};
    int userNum;
    int attempts {1};
    bool result {false};


    cout << "Guess a number from 0 to 9" << endl;
    cout << "You have 3 attempts!" << endl;

    while (attempts != 3) {
        cout << "Your guess >> ";
        cin >> userNum;

        if (randomNum == userNum) {
            cout << "Great! You've won!" << endl;
            result = 1;
            break;
        } else {
            cout << "Try again." << endl;
            attempts++;
        }
    }

    if (!result) {
        cout << "Better luck next time!" << endl;
    } else {
        cout << "Attempts: " << attempts << endl;
    }
    system("pause");
    return 0;
}
