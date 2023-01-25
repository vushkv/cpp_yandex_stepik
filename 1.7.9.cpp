// Переставьте соседние элементы массива (A[0] c A[1], A[2] c A[3] и т.д.).
// Если элементов нечетное число, то последний элемент остается на своем месте.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }
    if (n % 2 != 0) {
        n--;
    }
    for (int i = 1; i < n; i += 2) {
        swap(v[i - 1], v[i]);
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}