#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int start, end;
        cin >> start >> end;

        for (int i = start; i <= end; i++) {
            bool isPrime = true;

            if (i == 1) {
                isPrime = false;
            }

            for (int j = 2; j <= sqrt(i); j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) {
                cout << i << endl;
            }
        }

        cout << endl;
    }
    
    return 0;
}