// Дано натуральное число n > 1. Проверьте, является ли оно простым. Программа должна вывести слово YES,
// если число простое и NO, если число составное.
//Решение оформите в виде функции IsPrime(n), которая возвращает True для простых чисел и False для составных чисел.
// Количество операций в программе должно быть пропорционально корню из n.
#include <iostream>
#include <cmath>

using namespace std;

int MinDivisor(int n) {
    if (n % 2 == 0) {
        return 2;
    }
    for (int i = 3, isqrt = sqrt(n); i <= isqrt; i += 2)
        if (n % i == 0) {
            return i;
        }
    return n;
}

bool IsPrime(int n) {
    return MinDivisor(n) == n;
}

int main() {
    int n;
    cin >> n;
    cout << (IsPrime(n) ? "YES" : "NO");
    return 0;
}