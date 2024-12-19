#include <bits/stdc++.h>

using namespace std;

double arr[1000009];

int main() {
    int testCases;
    cin >> testCases;

    arr[0] = 0;
    for (int i = 1; i <= 1000000; i++) {
        arr[i] = arr[i - 1] + log10(i);
    }

    for (int i = 1; i <= testCases; i++) {
        int n, base;
        cin >> n >> base;
        
        cout << "Case " << i << ": " << (int) (arr[n] / log10(base)) + 1 << endl;
    }

    return 0;
}