#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string sentence;
        getline(cin >> ws, sentence);

        int vowelCount = 0;
        for (int i = 0; i < sentence.size(); i++) {
            if (sentence[i] == 'a' || sentence[i] == 'e' ||
                sentence[i] == 'i' || sentence[i] == 'o' ||
                sentence[i] == 'u' || sentence[i] == 'A' ||
                sentence[i] == 'E' || sentence[i] == 'I' ||
                sentence[i] == 'O' || sentence[i] == 'U') {
                vowelCount++;
            }
        }

        cout << "Number of vowels = " << vowelCount << endl;
    }

    return 0;
}