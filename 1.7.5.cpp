// Дан массив целых чисел. Если в нем есть два соседних элемента одного знака, выведите эти числа.
// Если соседних элементов одного знака нет - не выводите ничего.
// Если таких пар соседей несколько - выведите первую пару.
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    bool token = true;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < a.size(); i++) {
        cin >> a[i];
    }
    for (int i = 1; i < a.size(); i++) {
        if (token) {
            if (((a[i - 1] > 0) && (a[i] > 0)) ||
            ((a[i - 1] < 0) && (a[i] < 0))) {
                if (a[i - 1] < a[i]) {
                    cout << a[i - 1] << " " << a[i] << " ";
                } else {
                    cout << a[i] << " " << a[i - 1] << " ";
                }
                token = !token;
            }
        }
    }
    return 0;
}