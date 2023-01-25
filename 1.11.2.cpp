// Во входной строке записана последовательность чисел через пробел. Для каждого числа выведите слово YES
// (в отдельной строке), если это число ранее встречалось в последовательности или NO, если не встречалось.
#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> strange_sequence;
    for (int i = 0; i < n; i++) {
        int x;
        bool is_added;
        cin >> x;
        is_added = strange_sequence.insert(x).second;
        cout << (is_added ? "NO" : "YES") << "\n";
    }
    return 0;
}