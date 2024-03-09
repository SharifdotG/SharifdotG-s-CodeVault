#include <bits/stdc++.h>

using namespace std;

int main() {
    string line;
    int alphabetCount[26] = {0};

    while (getline(cin, line)) {
        for (int i = 0; i < line.length(); i++) {
            if (isalpha(line[i])) {
                alphabetCount[tolower(line[i]) - 'a']++;
            }
        }
    }

    for (int i = 0; i < 26; i++) {
        cout << (char)('a' + i) << " : " << alphabetCount[i] << endl;
    }
    
    return 0;
}