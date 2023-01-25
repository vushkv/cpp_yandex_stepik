// Даны вещественные числа a, b, c, d, e, f. Известно, что система линейных уравнений
// https://stepik.org/lesson/13024/step/13?unit=4376
// имеет ровно одно решение. Выведите два числа x и y, являющиеся решением этой системы.
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
        double a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        cout << (b * f - d * e) / (b * c - a * d) << " " << (c * e - a * f) / (b * c - a * d);
    return 0;
}