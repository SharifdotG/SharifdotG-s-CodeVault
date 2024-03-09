#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int length, distinctCharacters, numberOfRepetitions;
        cin >> length >> distinctCharacters >> numberOfRepetitions;

        for (int i = 0; i < length; i++) {
            cout << char('a' + i % numberOfRepetitions);
        }

        cout << endl;
    }
    
    return 0;
}