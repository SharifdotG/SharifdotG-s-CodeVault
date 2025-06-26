#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        bool isSorted = true;
        int max = INT_MIN;
        int min = INT_MAX;

        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1]) {
                continue;
            } else if (arr[0] < arr[1]) {
                if (arr[i] > max) {
                    max = arr[i];
                } else {
                    isSorted = false;
                    break;
                }
            } else if (arr[0] > arr[1]) {
                if (arr[i] < min) {
                    min = arr[i];
                } else {
                    isSorted = false;
                    break;
                }
            }
        }

        if (isSorted) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}