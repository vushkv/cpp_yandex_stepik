// Даны два целых числа. Выведите значение наибольшего из них. Если числа равны, выведите любое из них.
#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << a;
    }
    else if (b > a) {
        cout << b;
    }
    else {
        cout << a or b;
    }
    return 0;
}