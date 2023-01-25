// Дана последовательность натуральных чисел x1, x2, ..., xn. Стандартным отклонением называется величина
// где ................. (https://stepik.org/lesson/13024/step/9?unit=4376)среднее значение последовательности.
//Определите стандартное отклонение для данной последовательности натуральных чисел, завершающейся числом 0.
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
        int x, sum1 = 0, sum2 = 0, n = 0;
        while (cin >> x && x) {
            sum1 += x * x;
            sum2 += x;
            n++;
        }
        cout << setprecision(11) << fixed << sqrt((sum1 - (double)sum2 * sum2 / n) / (n - 1));
    return 0;
}