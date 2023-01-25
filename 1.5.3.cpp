#include <iostream>

using namespace std;

int main() {
    int sum = 0, now;
    cin >> now;
    while (now != 0) {
        sum = sum + now;
        cin >> now;
    }
    cout << sum;
}