#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        cin >> n;

        bool isArmstrong = false;
        int sum = 0, temp = n;
        
        while (temp != 0) {
            int remainder = temp % 10;
            sum += remainder * remainder * remainder;
            temp /= 10;
        }

        if (sum == n) {
            isArmstrong = true;
        }

        if (isArmstrong) {
            cout << n << " is an armstrong number!" << endl;
        } else {
            cout << n << " is not an armstrong number!" << endl;
        }
    }

    return 0;
}