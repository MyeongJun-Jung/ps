#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int N;
int main() {
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    vector<string> input(N);

    for (int i = 0; i < N; i++) {
        cin >> input[i];
    }


    for (int i = 0; i < N; i++) {
        stack<char> s;
        string inputStr = input[i];
        for (char c : inputStr) {
            if (s.size() > 0) {
                if (s.top() == '(' && c == ')') {
                    s.pop();
                    continue;
                }

            }
            s.push(c);
        }

        if (s.size() > 0) cout << "NO" << "\n";
        else cout << "YES" << "\n";
    }
}
