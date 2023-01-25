// По данному числу N распечатайте все целые степени двойки, не превосходящие N, в порядке возрастания.
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int i, n;
    cin >> n;
    i = 0;
    while (n >= pow(2, i)) {
        cout << pow(2, i) << " ";
        i = i + 1;
    }
    return 0;
}