#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string sentence;
        cin >> sentence;

        for (int i = 0; i < sentence.size(); i++) {
            if (sentence[i] >= 'a' && sentence[i] <= 'z') {
                cout << sentence[i] - 'a' + 1;
            } else if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
                cout << sentence[i] - 'A' + 1;
            } else {
                cout << sentence[i];
            }
        }

        cout << endl;
    }

    return 0;
}