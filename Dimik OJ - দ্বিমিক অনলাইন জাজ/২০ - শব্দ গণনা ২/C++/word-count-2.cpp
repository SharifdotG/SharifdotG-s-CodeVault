#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    cin.ignore();

    while (testCases--) {
        string sentence;
        getline(cin, sentence);
        
        stringstream ss(sentence);
        string word;

        int wordCount = 0;
        while (ss >> word) {
            wordCount++;
        }

        cout << "Count = " << wordCount << endl;
    }

    return 0;
}