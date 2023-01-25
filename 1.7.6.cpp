// Выведите значение наименьшего из всех положительных элементов в массиве.
// Известно, что в массиве есть хотя бы один положительный элемент.
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, min;
    bool token = true;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < a.size(); i++) {
        cin >> a[i];
    }

    for (int i = 0; i < a.size(); i++) {
        if ((a[i] > 0) && (token)) {
            min = a[i];
            token = !token;
        }
        if ((a[i] > 0) && (a[i] < min)) {
            min = a[i];
        }
    }
    cout << min;
    return 0;
}