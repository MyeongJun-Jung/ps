#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, s, y;
    int ar[7][2] = {};

    cin >> n; cin >> m;

    for (int i = 0; i < n; i++) {
        cin >> s; cin >> y;
        ar[y][s]++;
    }

    int result = 0; 

    for (int i = 1; i <= 6; i++) {
        for (int j = 0; j <= 1; j++) {
            result += ar[i][j] / m + (ar[i][j] % m != 0);
        }
    }

    cout << result;
}
