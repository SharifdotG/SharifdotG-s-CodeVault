#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    cin.ignore();
    
    while (testCases--) {
        string sentence;
        getline(cin, sentence);
        
        char findChar;
        cin >> findChar;
        cin.ignore();

        int frequency = 0;

        for (int i = 0; i < sentence.length(); i++) {
            if (sentence[i] == findChar) {
                frequency++;
            }
        }

        if (frequency == 0) {
            cout << "'" << findChar << "' is not present" << endl;
        } else {
            cout << "Occurrence of '" << findChar << "' in '" << sentence << "' = " << frequency << endl;
        }
    }
    
    return 0;
}