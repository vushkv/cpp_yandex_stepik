// N белочек нашли K орешков и решили разделить их поровну.
// Определите, сколько орешков останется после того, как все белочки возьмут себе равное количество орешков.
#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    cout << k % n;
    return 0;
}