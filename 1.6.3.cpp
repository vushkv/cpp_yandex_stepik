// Даны длины сторон треугольника. Вычислите площадь треугольника.
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
        double a, b, c, p;
        cin >> a >> b >> c;
        p = (a + b + c) / 2;
        cout << sqrt(p * (p - a) * (p - b) * (p - c));
    return 0;
}
