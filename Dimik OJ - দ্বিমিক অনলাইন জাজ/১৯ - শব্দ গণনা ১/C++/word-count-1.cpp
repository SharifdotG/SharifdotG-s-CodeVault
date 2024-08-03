#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    cin.ignore();

    while (testCases--) {
        string sentence;
        getline(cin, sentence);

        int wordCount = 0;
        for (int i = 0; i < sentence.size(); i++) {
            if (sentence[i] == ' ') {
                wordCount++;
            }
        }

        cout << "Count = " << wordCount + 1 << endl;
    }

    return 0;
}