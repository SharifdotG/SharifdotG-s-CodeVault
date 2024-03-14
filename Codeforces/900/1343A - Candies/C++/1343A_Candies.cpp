#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int candies;
        cin >> candies;

        int n = 2;
        int sum = 3;

        while (candies % sum != 0) {
            n *= 2;
            sum += n;
        }

        cout << candies / sum << endl;
    }
    
    return 0;
}