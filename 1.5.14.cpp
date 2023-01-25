// Последовательность состоит из натуральных чисел и завершается числом 0.
// Определите, какое количество элементов этой последовательности, равны ее наибольшему элементу.
#include <iostream>

using namespace std;

int main() {
        int n, max = 0, c = 0;
        while (cin >> n && n) {
            if (n > max) {
                max = n;
                c = 0;
            }
            if (n == max) {
                c++;
            }
        }
        cout << c;
    return 0;
}