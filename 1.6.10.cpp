// Даны действительные коэффициенты a, b, c. Решите уравнение ax2 + bx + c = 0 и выведите все его корни.
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
        double a, b, c, d, x1, x2;
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
            cout << "3";
        if (a == 0 && b == 0 && c != 0)
            cout << "0";
        if (a == 0 && b != 0)
            cout << "1 " << -c / b;
        if (a != 0) {
            d = b * b - 4 * a * c;
            x1 = (-b - sqrt(d)) / (2 * a);
            x2 = (-b + sqrt(d)) / (2 * a);
            if (d > 0) {
                if (x1 < x2) cout << "2 " << x1 << " " << x2;
                else cout << "2 " << x2 << " " << x1;
            }
            if (d == 0)
                cout << "1 " << x1;
            if (d < 0)
                cout << "0";
        }
    return 0;
}