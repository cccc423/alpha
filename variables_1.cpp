#include <iostream>
using namespace std;

int main() {
    int sum {0};
    int chocolate {0};
    int coffee {0};
    int milk {0};
    const float CHOCOLATE_PRICE {79};
    const float COFFEE_PRICE {49};
    const float MILK_PRICE {89};

    cout << "How many chocolate bars do you want to buy? >> ";
    cin >> chocolate;

    cout << "How much coffee do you want to buy? >> ";
    cin >> coffee;

    cout << "How much milk do you want to buy? >> ";
    cin >> milk;

    sum = (chocolate * CHOCOLATE_PRICE) +
          (coffee * COFFEE_PRICE) +
          (milk * MILK_PRICE);

    cout << "\nIt will be " << sum << " rubles\n" << endl;

    system("pause");
    return 0;
}