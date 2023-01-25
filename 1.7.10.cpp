// Циклически сдвиньте элементы списка вправо (A[0] переходит на место A[1], A[1] на место A[2], ...,
// последний элемент переходит на место A[0]).
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int elements_in_a, last_elem_holder;
    cin >> elements_in_a;
    vector <int> a(elements_in_a);
    for (int i = 0; i < a.size(); i++) {
        cin >> a[i];
    }
    last_elem_holder = a[a.size() - 1];
    for (int i = a.size() - 1; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = last_elem_holder;
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    return 0;
}