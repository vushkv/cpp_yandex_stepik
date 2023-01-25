#include <iostream>

using namespace std;

int main() {
    int eyes, legs;
    cin >> eyes >> legs;
    if (eyes >= 8) {
        if (legs == 8) {
            cout << "spider";
        } else {
            cout << "scallop";
        }
    } else {
        if (legs == 6) {
            cout << "bug";
        } else {
            cout << "cat";
        }
    }

}