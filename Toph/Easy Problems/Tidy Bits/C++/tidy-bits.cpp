#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    cin >> a;
    
    int count = 0;
    while (a > 0) {
        count += (a & 1);
        a >>= 1;
    }

    int i = 1;
    while (true) {
        int ones = 0;
        int b = i;
        while (b > 0) {
            ones += (b & 1);
            b >>= 1;
        }

        if (ones == count) {
            cout << i << endl;
            break;
        }

        i++;
    }

    return 0;
}