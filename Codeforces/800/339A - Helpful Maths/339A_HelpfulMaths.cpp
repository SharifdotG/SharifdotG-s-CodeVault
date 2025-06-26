#include <bits/stdc++.h>

using namespace std;

int main() {
    string sumToCount;
    cin >> sumToCount;

    vector<int> numbers;

    for (int i = 0; i < sumToCount.length(); i += 2) {
        numbers.push_back(sumToCount[i] - '0');
    }

    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i];

        if (i != numbers.size() - 1) {
            cout << "+";
        }
    }
    
    return 0;
}