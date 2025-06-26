#include <bits/stdc++.h>

using namespace std;

int main() {
    int stringLength;
    string inputString;
    cin >> stringLength >> inputString;

    map<string, int> twoGrams;
    
    for (int i = 0; i < stringLength - 1; i++) {
        string twoGram = inputString.substr(i, 2);
        twoGrams[twoGram]++;
    }

    int maxTwoGramCount = 0;
    string maxTwoGram;

    for (int i = 0; i < stringLength - 1; i++) {
        string twoGram = inputString.substr(i, 2);

        if (twoGrams[twoGram] > maxTwoGramCount) {
            maxTwoGramCount = twoGrams[twoGram];
            maxTwoGram = twoGram;
        }
    }

    cout << maxTwoGram << endl;
    
    return 0;
}