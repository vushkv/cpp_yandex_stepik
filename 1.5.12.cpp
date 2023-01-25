// Определите сумму всех элементов последовательности, завершающейся числом 0.
#include <iostream>

using namespace std;

int main() {
        int n, sum = 0;
        while (cin >> n && n && (sum += n));
        cout << sum;
    return 0;
}
