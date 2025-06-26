#include <bits/stdc++.h>

using namespace std;

int main() {
    while (true) {
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);

        if (cin.eof()) {
            break;
        }

        int count = 0;
        for (int i = 0; i < s1.size(); i++) {
            for (int j = 0; j < s2.size(); j++) {
                if (s1[i] == s2[j]) {
                    int k = 0;
                    while (i + k < s1.size() && j + k < s2.size() && s1[i + k] == s2[j + k]) {
                        k++;
                    }
                    
                    count = max(count, k);
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}