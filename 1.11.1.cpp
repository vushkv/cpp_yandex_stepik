// Дан список целых чисел, который может содержать до 100000 чисел.
// Определите, сколько в нем встречается различных чисел.
#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> numbers;
    int n, counter = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        numbers.insert(x);
    }
    for (auto now : numbers) {
        counter++;
    }
    cout << counter;
    return 0;
}