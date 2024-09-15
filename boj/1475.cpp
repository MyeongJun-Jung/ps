#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int ar[10];
int main() {
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    string s;
    cin >> s;

    for (char c : s) {
        ar[c - '0']++;
    }

    int max_num = 0;
    for (int i = 0; i < 10; i++) {
        if (i == 6 || i == 9) continue;

        max_num = max(max_num, ar[i]);
    }

    max_num = max(max_num, (ar[6] + ar[9]) / 2 + (ar[6] + ar[9]) % 2);

    cout << max_num;
}
