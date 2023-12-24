#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int permutationLength;
        cin >> permutationLength;

        for (int i = 2; i <= permutationLength; i++) {
            cout << i << " ";
        }

        cout << 1 << endl;
    }
    
    return 0;
}