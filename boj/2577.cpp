#include <iostream>

using namespace std;

int ar[10];
int main() {
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    int result = a * b * c;
    while (result > 0) {
        ar[result % 10]++;
        result /= 10;
    }

    for (int i = 0; i < 10; i++) cout << ar[i] << "\n";
}
