// На вход дается натуральное число N. Выведите следующее за ним четное число

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    cout << (N / 2) * 2 + 2;
    return 0;
}