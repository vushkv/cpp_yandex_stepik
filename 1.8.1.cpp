// Найдите индексы первого вхождения максимального элемента.
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, maxelem, maxi, maxj;
    bool token = true;
    cin >> n >> m;
    vector < vector <int> > a(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (token) {
                maxelem = a[i][j];
                maxi = i;
                maxj = j;
                token = !token;
            } else if (maxelem < a[i][j]) {
                maxelem = a[i][j];
                maxi = i;
                maxj = j;
            }
        }
    }
    cout << maxi << " " << maxj;
    return 0;
}
