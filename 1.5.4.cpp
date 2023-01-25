#include <iostream>

using namespace std;

int main() {
    int part1, part2;
    cin >> part1 >> part2;
    int sum1 = 0, sum2 = 0;
    while (part1 != 0) {
        sum1 = sum1 + part1 % 10;
        part1 = part1 / 10;
    }
    while (part2 != 0) {
        sum2 = sum2 + part2 % 10;
        part2 = part2 / 10;
    }
    if (sum1 == sum2) {
        cout << "Lucky ticket";
    } else {
        cout << "unlucky :(";
    }
}