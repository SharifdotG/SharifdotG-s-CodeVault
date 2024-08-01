#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    while (arr.size() > 0) {
        cout << arr.size() << endl;

        int min = arr[0];
        for (int i = 0; i < arr.size(); i++) {
            arr[i] -= min;
        }

        arr.erase(remove(arr.begin(), arr.end(), 0), arr.end());
    }

    return 0;
}