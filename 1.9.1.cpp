// Напишите функцию min(a, b), вычисляющую минимум двух чисел. Затем напишите функцию min4(a, b, c, d),
// вычисляющую минимум 4 чисел с помощью функции min. Считайте четыре целых числа и выведите их минимум.
#include <iostream>

int min(int first, int second) {
    if (first <= second) {
        return first;
    } else {
        return second;
    }
}

int min4(int a, int b, int c, int d) {
    int first = min(a, b);
    int second = min(c, d);
    return min(first, second);

}

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout << min4(a, b, c, d);
    return 0;
}