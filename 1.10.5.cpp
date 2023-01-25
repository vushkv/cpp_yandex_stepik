// По данной строке определите, является ли она палиндромом (то есть, читается одинаково как слева-направо,
// так и справа-налево).
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str;
    cin >> str;
    cout << (equal(str.begin(), str.end(), str.rbegin()) ? "yes" : "no") << endl;
    return 0;
}