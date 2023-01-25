// Выведите значение наименьшего нечетного элемента списка, а если в списке нет нечетных элементов - выведите число 0.
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
        if (((a[i] % 2 == 1) || (a[i] % 2 == -1)) && (token)) {
            min = a[i];
            token = !token;
        }
        if (((a[i] % 2 == 1) || (a[i] % 2 == -1)) && (a[i] < min) && (!token)) {
            min = a[i];
        }
    }
    if (token) {
        cout << 0;
    } else {
        cout << min;
    }
    return 0;
}