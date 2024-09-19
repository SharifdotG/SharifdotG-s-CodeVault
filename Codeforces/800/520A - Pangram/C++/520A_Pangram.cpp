#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;

    string strings;
    cin >> strings;

    if (number < 26) {
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < number; i++) {
        strings[i] = tolower(strings[i]);
    }

    sort(strings.begin(), strings.end());

    for (int i = 0; i < number - 1; i++) {
        if (strings[i] == strings[i + 1]) {
            strings.erase(i, 1);
            i--;
            number--;
        }
    }

    if (number == 26) cout << "YES";
    else cout << "NO";

    return 0;
}