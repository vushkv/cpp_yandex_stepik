// Дан многочлен P(x)=anxn + an−1xn−1+ … + a1x + a0 и число x.
// Вычислите значение этого многочлена, воспользовавшись схемой Горнера:
//P(x)=(…(((anx + an−1)x + an−2)x + an−3) … )x+ a0
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
        int n;
        double x, a, p = 0;
        cin >> n >> x;
        while ((n + 1) > 0) {
            cin >> a;
            p = p * x + a;
            n--;
        }
        cout << p;
    return 0;
}