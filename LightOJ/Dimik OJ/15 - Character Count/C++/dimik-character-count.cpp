#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        string sentence;
        cin >> sentence;

        int frequency[26] = {0};

        for (int i = 0; i < sentence.length(); i++) {
            frequency[sentence[i] - 'a']++;
        }

        for (int i = 0; i < sentence.length(); i++) {
            if (frequency[sentence[i] - 'a'] > 0) {
                cout << sentence[i] << " = " << frequency[sentence[i] - 'a'] << endl;
                frequency[sentence[i] - 'a'] = 0;
            }
        }
        
        if (testCases > 0) {
            cout << endl;
        }
    }
    
    return 0;
}