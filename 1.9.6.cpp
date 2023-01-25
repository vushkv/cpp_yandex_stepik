// Проверьте, принадлежит ли точка данной закрашенной области:
//Если точка принадлежит области (область включает границы), выведите слово YES, иначе выведите слово NO.
//Решение должно содержать функцию IsPointInArea(x, y), возвращающую True, если точка принадлежит области и False,
// если не принадлежит. Основная программа должна считать координаты точки, вызвать функцию IsPointInArea и в
// зависимости от возвращенного значения вывести на экран необходимое сообщение.
//Функция IsPointInArea не должна содержать инструкцию if.
#include <iostream>
#include <cmath>

using namespace std;

bool IsPointInArea(double x, double y) {
    double xL1_1 = -4, yL1_1 = 4,
            xL1_2 = 4, yL1_2 = -4,
            kL1 = (yL1_1 - yL1_2) / (xL1_1 - xL1_2),
    bL1 = yL1_1 - kL1 * xL1_1;
    double xL2_1 = -3, yL2_1 = -4,
            xL2_2 = 1, yL2_2 = 4,
            kL2 = (yL2_1 - yL2_2) / (xL2_1 - xL2_2),
    bL2 = yL2_1 - kL2 * xL2_1;
    double xC = -1, yC = 1, rC = 2;

    if (y >= (kL1 * x + bL1) && y >= (kL2 * x + bL2)) {
        if ((pow(x - xC, 2) + pow(y - yC, 2)) <= pow(rC, 2)) {
            return true;
        } else {
            return false;
        }
    } else if (y <= (kL1 * x + bL1) && y <= (kL2 * x + bL2)) {
        if ((pow(x - xC, 2) + pow(y - yC, 2)) >= pow(rC, 2)) {
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}

int main() {
    double x, y;
    cin >> x >> y;
    cout << (IsPointInArea(x, y) ? "YES" : "NO");
    return 0;
}