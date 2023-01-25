// Даны четыре действительных числа: x1, y1, x2, y2. Напишите функцию distance(x1, y1, x2, y2),
// вычисляющую расстояние между точкой (x1. y1) и (x2, y2). Считайте четыре действительных числа
// и выведите результат работы этой функции.
#include <iostream>
#include <cmath>

double distance(double x1, double y1, double x2, double y2) {
    return hypot((x2 - x1), (y2 - y1));
}

int main() {
    double x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    std::cout << distance(x1, y1, x2, y2);
    return 0;
}