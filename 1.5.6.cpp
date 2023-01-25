#include <iostream>

using namespace std;

int main() {
    int now;
    now = -1;
    while (now != 0) {
        cin >> now;
        if (now <= 0)
            continue;
        cout << now << " ";
    }
}