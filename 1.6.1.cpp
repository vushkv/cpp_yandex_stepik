// Дано положительное действительное число X. Выведите его дробную часть.
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double x;
    cin >> x;
    cout << x - (int)x;
}