#include <iostream>
#include <cmath>

using namespace std;

int discriminant(double a, double b, double c) {
    double d = (b * b) - (4 * a * c);
    if (d > 0) {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);
        cout << "D = " << d << " x1: " << x1 << " x2: " << x2 << endl;
    } else if (d == 0) {
        double x1 = -b / (2 * a);
        cout << "D = " << d << " x1 = " << x1 << endl;
    } else {
        cout << "No solutions. " << d << " < 0" << endl;;
    }
    return 0;
}

int main() {
    double a, b, c;

    cout << "Enter your number for A >> ";
    cin >> a;
    cout << "Enter your number for B >> ";
    cin >> b;
    cout << "Enter your number for C >> ";
    cin >> c;

    discriminant(a, b, c);
    system("pause");

    return 0;
}
