// Выведите все элементы массива с четными индексами (то есть A[0], A[2], A[4], ...).
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (!(i % 2)) {
                cout << a[i] << " ";
            }
        }
}
