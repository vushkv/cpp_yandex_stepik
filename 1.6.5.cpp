// Процентная ставка по вкладу составляет P процентов годовых, которые прибавляются к сумме вклада через год.
// Вклад составляет X рублей Y копеек. Определите размер вклада через K лет.
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
        int p, x, y, k;
        cin >> p >> x >> y >> k;
        x = x * 100 + y;
        while (k > 0) {
            x += x * p / 100;
            k--;
        }
        cout << x / 100 << " " << x % 100;
    return 0;
}