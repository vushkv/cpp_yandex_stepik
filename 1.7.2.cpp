// Выведите все четные элементы массива.
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            cout << a[i] << " ";
        }
    }
}
