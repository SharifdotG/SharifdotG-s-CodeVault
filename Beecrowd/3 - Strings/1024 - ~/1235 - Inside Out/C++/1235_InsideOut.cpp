#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    cin.ignore();

    while (n--) {
        string s;
        getline(cin, s);

        reverse(s.begin(), s.begin() + s.size() / 2);
        reverse(s.begin() + s.size() / 2, s.end());

        cout << s << endl;
    }

    return 0;
}