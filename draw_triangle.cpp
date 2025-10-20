#include <iostream>
using namespace std;

int main() {
    int height {0};

    cout << "Enter height: ";
    cin >> height;
    int size_spaces {height};
    int size_symbols {1};

    for (int i = 0; i < height; i++) {
        for (int k = 0; k < size_spaces; k++) {
            cout << " ";
        }
        for (int h = 0; h < size_symbols; h++) {
            cout << "*";
        }

        cout << "\n";
        size_symbols += 2;
        size_spaces -= 1;
    }

    system("pause");
    return 0;
}