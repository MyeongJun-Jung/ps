#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x, v;
    map<int, int> m;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        m[x] = m[x] + 1;
    }
    cin >> v;

    cout << m[v];
}
