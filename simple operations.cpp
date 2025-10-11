#include <iostream>
#include <windows.h>

using namespace std;

int addition(int x, int y) {
    return x + y;
}

int subtraction(int x, int y) {
    return x - y;
}

int multiplication(int x, int y) {
    return x * y;
}

int division(int x, int y) {
    return x / y;
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int a, b, choice;
    
    cout << "Введите первое число >> ";
    cin >> a;
    cout << "Введите второе число >> ";
    cin >> b;

    while(true) {
        cout << "Выбранные числа: " << a << ", " << b << endl;
        cout << "1. Сумма" << endl;
        cout << "2. Вычитание" << endl;
        cout << "3. Умножение" << endl;
        cout << "4. Деление" << endl;
        cout << "0. Выход" << endl;
        cout << "Выберите операцию (цифру от 0 до 4): ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Результат: " << addition(a, b) << endl;
                system("pause");
                break;
            case 2:
                cout << "Результат: " << subtraction(a, b) << endl;
                system("pause");
                break;
            case 3:
                cout << "Результат: " << multiplication(a, b) << endl;
                system("pause");
                break;
            case 4:
                cout << "Результат: " << division(a, b) << endl;
                system("pause");
                break;
            case 0:
                cout << "Выход из программы." << endl;
                return 0;
            default:
                cout << "Неверный выбор." << endl;
                system("pause");
        }
    system("cls");
    }

    return 0;
}
