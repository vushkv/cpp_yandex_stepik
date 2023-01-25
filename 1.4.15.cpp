// Шахматный король ходит по горизонтали, вертикали и диагонали, но только на 1 клетку.
// Даны две различные клетки шахматной доски, определите,
// может ли король попасть с первой клетки на вторую одним ходом.
#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a - 1 == c && b - 1 == d) {
        cout << "YES";
    }
    else if (a - 1 == c && b == d) {
        cout << "YES";
    }
    else if (a - 1 == c && b + 1 == d) {
        cout << "YES";
    }
    else if (a == c && b - 1 == d) {
        cout << "YES";
    }
    else if (a == c && b + 1 == d) {
        cout << "YES";
    }
    else if (a + 1 == c && b - 1 == d) {
        cout << "YES";
    }
    else if (a + 1 == c && b == d) {
        cout << "YES";
    }
    else if (a + 1 == c && b + 1 == d) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}