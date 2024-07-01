#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cups = 0, count = 0;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            if (cups > 0) {
                count++, cups--;
            }
        } else {
            cups = min(2, cups + 2);
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
