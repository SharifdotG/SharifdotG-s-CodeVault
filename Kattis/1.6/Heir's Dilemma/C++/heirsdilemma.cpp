#include <bits/stdc++.h>

using namespace std;

int main() {
    int limit1, limit2, possibleCombinations = 0;
    cin >> limit1 >> limit2;

    for (int i = limit1; i <= limit2; i++) {
        bool isPossibleCombination = true;
        string number = to_string(i);
        
        map<char, bool> digits;

        for (int j = 0; j < number.length(); j++) {
            if (digits[number[j]] || number[j] == '0' || i % (number[j] - '0') != 0) {
                isPossibleCombination = false;
                break;
            }

            digits[number[j]] = true;
        }

        if (isPossibleCombination) possibleCombinations++;
    }

    cout << possibleCombinations << endl;

    return 0;
}
