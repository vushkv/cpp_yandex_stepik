// Последовательность Фибоначчи определяется так:
// F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).
// По данному числу N определите N-е число Фибоначчи F(N).
#include <iostream>

using namespace std;

int main() {
        int n, i = 3, f = 1, fn = 1;
        cin >> n;
        while (i <= n) {
            fn += f;
            f = fn - f;
            i++;
        }
        cout << fn;
    return 0;
}