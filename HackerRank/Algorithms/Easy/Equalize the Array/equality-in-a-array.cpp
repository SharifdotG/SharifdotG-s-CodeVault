#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int maxFreq = 0;
    for (auto it = freq.begin(); it != freq.end(); it++) {
        maxFreq = max(maxFreq, it->second);
    }

    cout << n - maxFreq << endl;

    return 0;
}