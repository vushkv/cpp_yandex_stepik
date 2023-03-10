// Дан прямоугольный массив размером n×m. Поверните его на 90 градусов по часовой стрелке,
// записав результат в новый массив размером m×n.
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector <vector <int> > a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    vector <vector <int> > aT(m, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            aT[j][i] = a[n - i - 1][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << aT[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}