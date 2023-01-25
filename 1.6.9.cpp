// Даны действительные коэффициенты a, b, c, при этом a ≠ 0.
// Решите квадратное уравнение ax2 + bx + c = 0 и выведите все его корни.
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
        double a, b, c, d, x1, x2;
        cin >> a >> b >> c;
        d = b * b - 4 * a * c;
        if (d >= 0) {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            if (x2 < x1)
                cout << x2 << " " << x1;
            if (x1 < x2)
                cout << x1 << " " << x2;
            if (x1 == x2)
                cout << x1;
        }
    return 0;
}