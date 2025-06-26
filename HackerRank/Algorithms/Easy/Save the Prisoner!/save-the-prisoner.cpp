#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        int prisoners, sweets, start;
        cin >> prisoners >> sweets >> start;

        int result = (start + sweets - 1) % prisoners;
        cout << (result == 0 ? prisoners : result) << endl;
    }

    return 0;
}