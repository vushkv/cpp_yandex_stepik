// В некоторой школе решили набрать три новых математических класса и оборудовать кабинеты для них
// новыми партами. За каждой партой может сидеть два учащихся. Известно количество учащихся в каждом
// из трех классов. Выведите наименьшее число парт, которое нужно приобрести для них.
// Каждый класс сидит в своем кабинете.

#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << ((a / 2) + (a % 2)) + ((b / 2) + (b % 2)) + ((c / 2) + (c % 2));
    return 0;
}