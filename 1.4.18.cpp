// Шахматный конь ходит буквой “Г” — на две клетки по вертикали в любом направлении и на одну клетку по горизонтали,
// или наоборот. Даны две различные клетки шахматной доски, определите,
// может ли конь попасть с первой клетки на вторую одним ходом.
#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a + 1 == c && b - 2 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a + 2 == c && b - 1 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a + 2 == c && b + 1 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a + 1 == c && b + 2 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a - 1 == c && b + 2 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a - 2 == c && b + 1 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a - 2 == c && b - 1 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else if (a - 1 == c && b - 2 == d && 0 < c <= 8 && 0 < d <= 8) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}