// Дано натуральное число N. Выведите слово YES, если число N является точной степенью двойки,
// или слово NO в противном случае.
#include <iostream>

using namespace std;

int main() {
    int n, i = 1;
    cin >> n;
    while (i < n) {
        i *= 2;
    }
    if (i == n) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}