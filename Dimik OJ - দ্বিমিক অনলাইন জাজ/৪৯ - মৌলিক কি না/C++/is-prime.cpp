#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        cin >> n;
        
        int arr[n - 1];
        for (int i = 0; i < n - 1; i++) {
            cin >> arr[i];
        }

        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }

        for (int i = 0; i < n - 1; i++) {
            sum -= arr[i];
        }

        cout << sum << endl;
    }

    return 0;
}