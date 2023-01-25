// Найдите количество положительных элементов в данном массиве.
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] > 0) {
            sum += 1;
        }
    }
    cout << sum;
    return 0;
}
