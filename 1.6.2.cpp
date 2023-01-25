// Дано положительное действительное число X. Выведите его первую цифру после десятичной точки.
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
        double x;
        cin >> x;
        cout << (int)(x * 10) % 10;
    return 0;
}
