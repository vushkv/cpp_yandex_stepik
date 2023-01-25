// Последовательность Фибоначчи определяется так:
// F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).
// Дано натуральное число A. Определите, каким по счету числом Фибоначчи оно является,
// то есть выведите такое число N, что F(N) = A. Если А не является числом Фибоначчи, выведите число -1.
#include <iostream>

using namespace std;

int main() {
        int a, i = 1, f = 0, fn = 1;
        cin >> a;
        while (fn < a) {
            fn += f;
            f = fn - f;
            i++;
        }
        if (fn == a) {
            cout << i;
        } else {
            cout << -1;
        }
    return 0;
}