// Даны три целых числа. Найдите наибольшее из них (программа должна вывести ровно одно целое число).
// Под наибольшим в этой задаче понимается число, которое не меньше, чем любое другое.
#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b && a >= c) {
        cout << a;
    }
    else if (b >= c && b >= a) {
        cout << b;
    }
    else if (c >= a && c >= b) {
        cout << c;
    }
    else if (c >= b && c >= a) {
        cout << c;
    }
    else if (b >= a && b >= c) {
        cout << b;
    }
    return 0;
}