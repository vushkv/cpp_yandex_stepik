// Дан массив. Выведите те его элементы, которые встречаются в массиве только один раз.
// Элементы нужно выводить в том порядке, в котором они встречаются в списке.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < a.size(); i++) {
        cin >> a[i];
    }
    for (int i = 0; i < a.size(); i++) {
        if (count(a.begin(), a.end(), a[i]) == 1) {
            cout << a[i] << " ";
        }
    }
    return 0;
}