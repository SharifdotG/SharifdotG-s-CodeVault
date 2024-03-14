#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, max = 0, min = 101, maxIndex, minIndex;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }

        if (arr[i] <= min) {
            min = arr[i];
            minIndex = i;
        }
    }

    if (maxIndex > minIndex) cout << (maxIndex - 1) + (n - minIndex) - 1;
    else cout << (maxIndex - 1) + (n - minIndex);

    return 0;
}