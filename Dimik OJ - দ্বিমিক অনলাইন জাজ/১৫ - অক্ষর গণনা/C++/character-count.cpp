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
        
        for (int i = 0; i < 26; i++) {
            if (frequency[i] > 0) {
                cout << (char) (i + 'a') << " = " << frequency[i] << endl;
            }
        }
        
        if (testCases > 0) {
            cout << endl;
        }
    }
    
    return 0;
}