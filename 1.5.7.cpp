//По данному целому числу N распечатайте все квадраты натуральных чисел, не превосходящие N,
// в порядке возрастания.
#include <iostream>

using namespace std;

int main() {
    int i, n;
    cin >> n;
    i = 1;
    while (i * i <= n) {
        cout << i * i << " ";
        i = i + 1;
    }
    return 0;
}