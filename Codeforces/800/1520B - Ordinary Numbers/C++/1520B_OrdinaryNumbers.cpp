#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int number, count = 0;
        cin >> number;

        for (int i = 1; i <= 9; i++) {
            long long temp = i;
            
            while (temp <= number) {
                count++;
                temp = temp * 10 + i;
            }
        }

        cout << count << endl;
    }

    return 0;
}