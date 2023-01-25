// Процентная ставка по вкладу составляет P процентов годовых, которые прибавляются к сумме вклада в конце года.
// Вклад составляет X рублей Y копеек. Определите размер вклада через год.
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
            int p, x, y;
            cin >> p >> x >> y;
            x = (x * 100 + y) * (p + 100) / 100;
            cout <<  x / 100 << " " << x % 100;
    return 0;
}

