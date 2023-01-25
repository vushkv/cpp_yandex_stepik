// Последовательность состоит из натуральных чисел и завершается числом 0.
// Определите значение наибольшего элемента последовательности.
#include <iostream>

using namespace std;

int main() {
    int n, max = 0;
    while (true) {
        cin >> n;
        if (n == 0)
            break;
        if (n > max)
            max = n;
    }
    cout << max;
    return 0;
}