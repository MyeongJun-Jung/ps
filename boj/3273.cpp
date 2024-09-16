#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

map<int, int> m;
int main() {
    ios::sync_with_stdio(0); 
    cin.tie(NULL); 
    cout.tie(NULL);
    
    int n, x;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
        m[ar[i]] = m[ar[i]] + 1;
    }
    
    cin >> x;

    int result = 0;

    for (int i = 0; i < n; i++) {
        if (m[ar[i]] <= 0) continue;

        int reverse = x - ar[i];
        if (m[reverse] <= 0) continue; 

        if (ar[i] == reverse) {
            result += m[ar[i]] * (m[ar[i]] - 1) / 2;
        } else {
            result += m[ar[i]] * m[reverse];
        }

        m[ar[i]] = 0;
        m[reverse] = 0;
    }

    cout << result;
}
