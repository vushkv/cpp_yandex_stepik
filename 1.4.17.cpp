// Шахматный ферзь ходит по диагонали, горизонтали или вертикали. Даны две различные клетки шахматной доски,
// определите, может ли ферзь попасть с первой клетки на вторую одним ходом.
#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a - 1 == c && b - 1 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a - 2 == c && b - 2 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a - 3 == c && b - 3 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a - 4 == c && b - 4 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a - 5 == c && b - 5 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a - 6 == c && b - 6 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a - 7 == c && b - 7 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a - 1 == c && b + 1 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a - 2 == c && b + 2 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a - 3 == c && b + 3 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a - 4 == c && b + 4 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a - 5 == c && b + 5 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a - 6 == c && b + 6 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a - 7 == c && b + 7 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a + 1 == c && b - 1 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a + 2 == c && b - 2 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a + 3 == c && b - 3 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a + 4 == c && b - 4 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a + 5 == c && b - 5 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a + 6 == c && b - 6 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a + 7 == c && b - 7 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a + 1 == c && b + 1 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a + 2 == c && b + 2 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a + 3 == c && b + 3 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a + 4 == c && b + 4 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a + 5 == c && b + 5 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a + 6 == c && b + 6 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a + 7 == c && b + 7 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a == c && b - 1 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a == c && b - 2 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a == c && b - 3 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a == c && b - 4 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a == c && b - 5 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a == c && b - 6 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a == c && b - 7 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a == c && b + 1 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a == c && b + 2 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a == c && b + 3 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a == c && b + 4 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a == c && b + 5 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a == c && b + 6 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a == c && b + 7 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a + 1 == c && b == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a + 2 == c && b == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a + 3 == c && b == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a + 4 == c && b == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a + 5 == c && b == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a + 6 == c && b == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a + 7 == c && b == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a - 1 == c && b == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a - 2 == c && b == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a - 3 == c && b == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a - 4 == c && b == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a - 5 == c && b == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a - 6 == c && b == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a - 7 == c && b == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}