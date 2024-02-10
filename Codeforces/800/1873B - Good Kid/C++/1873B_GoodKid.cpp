#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int digits, product = 1;
        cin >> digits;

        int array[digits];
 
        for (int i = 0; i < digits; i++) {
            cin >> array[i];
        }
 
        sort(array, array + digits);

        array[0]++;

        for (int i = 0; i < digits; i++) {
            product *= array[i];
        }

        cout << product << endl;
    }
    
    return 0;
}