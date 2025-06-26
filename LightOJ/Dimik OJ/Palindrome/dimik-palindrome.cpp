#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string s;
        cin >> s;

        bool isPalindrome = true;
        for (int i = 0; i < s.length() / 2; i++) {
            if (s[i] != s[s.length() - i - 1]) {
                isPalindrome = false;
                break;
            }
        }
        
        if (isPalindrome) {
            cout << "Yes! It is palindrome!" << endl;
        } else {
            cout << "Sorry! It is not palindrome!" << endl;
        }
    }

    return 0;
}