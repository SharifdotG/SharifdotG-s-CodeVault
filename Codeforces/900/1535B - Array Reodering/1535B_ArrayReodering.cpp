#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int elements;
        cin >> elements;

        int array[elements];
        for (int i = 0; i < elements; i++) {
            cin >> array[i];
        }

        sort(array, array + elements, [](int a, int b) {
            if (a % 2 == 0 && b % 2 == 1) {
                return true;
            } else if (a % 2 == 1 && b % 2 == 0) {
                return false;
            } else {
                return a < b;
            }
        });

        int pairs = 0;
        
        for (int i = 0; i < elements; i++) {
            for (int j = i + 1; j < elements; j++) {
                if (__gcd(array[i], array[j] * 2) > 1) {
                    pairs++;
                }
            }
        }

        cout << pairs << endl;
    }
    
    return 0;
}