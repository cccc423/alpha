#include <iostream>

using namespace std;

void ascendingOrder(int nums[5]) {
    int temp {0};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (nums[j] > nums[j + 1]) {
                temp = nums[j + 1];
                nums[j + 1] = nums[j];
                nums[j] = temp;
            }
        }
    }
}

void descendingOrder(int nums[5]) {
    int temp {0};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (nums[j] < nums[j + 1]) {
                temp = nums[j + 1];
                nums[j + 1] = nums[j];
                nums[j] = temp;
            }
        }
    }
}

int main() {
    srand(time(NULL));
    int numbers[5];
    int num_length {sizeof(numbers) / sizeof(numbers[0])};
    int choice {};

    for (int i = 0; i < num_length; i++) {
        numbers[i] = rand() % 10;
    }

    cout << "five random numbers: " << endl;

    for (int i = 0; i < num_length; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    cout << "Display as: " << endl;
    cout << "1. Ascending order (low -> high)" << endl;
    cout << "2. Descending order (high -> low)" << endl;
    cout << "0. Exit" << endl;
    cin >> choice;

    switch(choice) {
        case 1:
            ascendingOrder(numbers);

            for (int i = 0; i < num_length; i++) {
                cout << numbers[i] << " ";
            } 
            
            break;
        case 2:
            descendingOrder(numbers);

            for (int i = 0; i < num_length; i++) {
                cout << numbers[i] << " ";
            }

            break;
        case 0:
            break;
        default:
            cout << "Error." << endl;
            break;
    }

    cout << endl;
    system("pause");

    return 0;
}