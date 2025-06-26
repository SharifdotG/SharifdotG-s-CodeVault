#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int number;
        cin >> number;
        
        if (number > 45) {
            cout << -1 << endl;
            continue;
        }

        int sum = 0, digit = 9;
        vector<int> digits;

        while (sum < number) {
            if (sum + digit <= number) {
                sum += digit;
                digits.push_back(digit);
            }

            digit--;
        }

        sort(digits.begin(), digits.end());

        for (int i = 0; i < digits.size(); i++) {
            cout << digits[i];
        }

        cout << endl;
    }
    
    return 0;
}