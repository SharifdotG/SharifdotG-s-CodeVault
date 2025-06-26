#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        int a, b;
        cin >> a >> b;

        cout << floor(sqrt(b)) - ceil(sqrt(a)) + 1 << endl;
    }

    return 0;
}