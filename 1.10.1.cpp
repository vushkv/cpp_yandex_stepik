// По введенному символу определите, является ли он цифрой.
#include <iostream>

using namespace std;

int main() {
    char symbol;
    cin >> symbol;
    cout << ('0' <= symbol && symbol <= '9' ? "yes" : "no");
    return 0;
}