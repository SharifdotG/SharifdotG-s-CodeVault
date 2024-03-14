#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    string testResult;

    while (testCases--) {
        cin >> testResult;

        int sum = 0, score = 0;

        for (int i = 0; i < testResult.size(); i++) {
            if (testResult[i] == 'O') {
                score++;
                sum += score;
            } else {
                score = 0;
            }
        }

        cout << sum << endl;
    }
    
    return 0;
}