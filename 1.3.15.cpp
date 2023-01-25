// Пирожок в столовой стоит A рублей и B копеек.
// Определите, сколько рублей и копеек нужно заплатить за N пирожков.

#include <iostream>

using namespace std;

int main() {
    int A, B, N;
    cin >> A >> B >> N;
    cout << (((A * 100 + B) * N) / 100) << " " << (((A * 100 + B) * N) % 100);
    return 0;
}