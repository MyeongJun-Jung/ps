#include <iostream>
#include <string>

using namespace std;

int ar[26];
int main() {
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    
    string s;
    cin >> s;


    for (char c : s) {
        ar[c-'a']++;
    }

    for (int val : ar) {
        cout << val <<  " ";
    }
}
