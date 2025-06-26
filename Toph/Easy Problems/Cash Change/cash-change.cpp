#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int denominations[] = {500, 100, 50, 10, 5, 1};
    int size = sizeof(denominations) / sizeof(denominations[0]);

    vector<int> result;
    for (int i = 0; i < size; i++) {
        while (n >= denominations[i]) {
            n -= denominations[i];
            result.push_back(denominations[i]);
        }
    }

    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}