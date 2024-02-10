#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string word, cf = "codeforces";
        cin >> word;

        int count = 0;

        for (int i = 0; i < word.length(); i++) {
            if (word[i] != cf[i]) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}