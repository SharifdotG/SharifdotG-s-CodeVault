#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, number, count = 0;
    cin >> testCases;

    while (testCases--) {
        cin >> number;
        vector<int> roundNumbers;

        while (number > 0) {
            roundNumbers.push_back(number % 10);
            number /= 10;
        }

        for (int i = 0; i < roundNumbers.size(); i++) {
            if (roundNumbers[i] != 0) {
                count++;
            }
        }

        cout << count << endl;

        for (int i = 0; i < roundNumbers.size(); i++) {
            if (roundNumbers[i] != 0) {
                cout << roundNumbers[i] * pow(10, i) << " ";
            }
        }

        cout << endl;

        count = 0;
    }

    return 0;
}