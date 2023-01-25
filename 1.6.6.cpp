// Определите среднее значение всех элементов последовательности, завершающейся числом 0.
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int n, i = 0, sum = 0;
    while (cin >> n && n) {
        sum += n;
        i++;
    }
    cout << setprecision(11) << fixed << (double)sum / i;
    return 0;
}