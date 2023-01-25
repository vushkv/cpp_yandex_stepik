// Даны вещественные числа a, b, c, d, e, f. Решите систему линейных уравнений
// https://stepik.org/lesson/13024/step/14?unit=4376
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
        double a, b, c, d, e, f, det, det_x, det_y;
        cin >> a >> b >> c >> d >> e >> f;
        det = b * c - a * d;	// главный определитель
        det_x = b * f - d * e;	// определитель x
        det_y = c * e - a * f;  // определитель y
        if (det != 0) {
            cout << "2 " << det_x / det << " " << det_y / det;
        }
        else {
            if (det_x == 0 && det_y == 0) {
                if (a == 0 && b == 0 && c == 0 && d == 0) {
                    if (e != 0 || f != 0) {
                        cout << "0";
                    }
                    else {
                        cout << "5";
                    }
                }
                else {
                    if (a == 0 && c == 0) {
                        if (b != 0) {
                            cout << "4 " << e / b;  // 4 << y
                        }
                        else {
                            cout << "4 " << f / d; // 4 << y
                        }
                    }
                    else {
                        if (b == 0 && d == 0) {
                            if (a != 0) {
                                cout << "3 " << e / a;  // 3 << x
                            }
                            else {
                                cout << "3 " << f / c; // 3 << x
                            }
                        }
                        else {
                            if (b != 0) {
                                cout << "1 " << -a / b << " " << e / b;  // 1 << k << n
                            }
                            else {
                                cout << "1 " << -c / d << " " << f / d; // 1 << k << n
                            }
                        }
                    }
                }
            }
            else {
                cout << "0";
            }
        }
    return 0;
}
