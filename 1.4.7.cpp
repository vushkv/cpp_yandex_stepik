#include <iostream>

using namespace std;

int main() {
    int year;
    cin >> year;
    bool mod400 = year % 400 == 0;
    if (year % 4 == 0 && year % 100 != 0 || mod400) {
        cout << 366;
    } else {
        cout << 365;
    }
}