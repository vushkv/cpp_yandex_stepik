//Даны значения двух моментов времени, принадлежащих одним и тем же суткам: часы, минуты и секунды
// для каждого из моментов времени. Известно, что второй момент времени наступил не раньше первого.
// Определите, сколько секунд прошло между двумя моментами времени.

#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    cout << ((d * 3600) + (e * 60) + f) - ((a * 3600) + (b * 60) + c);
    return 0;
}