#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 1; i <= testCases; i++) {
        int number;
        cin >> number;

        cout << "Case " << i << ": ";

        for (int i = 1; i <= number; i++) {
            if (number % i == 0) {
                if (i == number) cout << i;
                else cout << i << " ";
            }
        }

        cout << endl;
    }
    
    return 0;
}