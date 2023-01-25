// Дан массив чисел. Посчитайте, сколько в нем пар элементов, равных друг другу.
// Считается, что любые два элемента, равные друг другу образуют одну пару, которую необходимо посчитать.
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int elems_in_a, couples = 0;
    cin >> elems_in_a;
    vector <int> a(elems_in_a);
    for (int i = 0; i < a.size(); i++) {
        cin >> a[i];
    }
    for (int i = 1; i < a.size(); i++) {
        for (int j = 0; j < i; j++) {
            (a[j] == a[i]) ? couples++ : couples;
        }
    }
    cout << couples;
    return 0;
}