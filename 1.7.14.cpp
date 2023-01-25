// N кеглей выставили в один ряд, занумеровав их слева направо числами от 1 до N.
// Затем по этому ряду бросили K шаров, при этом i-й шар сбил все кегли с номерами от li до ri включительно.
// Определите, какие кегли остались стоять на месте.
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector <int> not_ninepins(n);
    for (int i = 0; i < n; i++) {
        not_ninepins[i] = 1;
    }
    for (int i = 0; i < k; i++) {
        int from, to;
        cin >> from >> to;
        for (int j = from - 1; j < to; j++) {
            not_ninepins[j] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        if (not_ninepins[i] == 1) {
            cout << "I";
        } else {
            cout << ".";
        }
    }
    return 0;
}