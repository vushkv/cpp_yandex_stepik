// Дана строка, содержащая пробелы. Найдите, сколько в ней слов (слово – это последовательность
// непробельных символов, слова разделены одним пробелом, первый и последний символ строки – не пробел).
#include <iostream>
#include <string>

using namespace std;

int main() {
    int spaces = 0;
    string s;
    getline(cin, s);
    for (auto c : s) {
        if (isspace(c)) {
            spaces += 1;
        }
    }
    cout << spaces + 1;
    return 0;
}