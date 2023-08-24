#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int number, answer;
        cin >> number;

        answer = (((number * 567 / 9 + 7492) * 235 / 47 - 498) % 100) / 10;
        cout << abs(answer) << endl;
    }
    
    return 0;
}