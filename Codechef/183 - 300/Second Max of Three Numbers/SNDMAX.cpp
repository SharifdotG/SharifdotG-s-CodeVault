#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int a, b, c;
        cin >> a >> b >> c;

        cout << max(min(a, b), min(max(a, b), c)) << endl;
    }
    
    return 0;
}