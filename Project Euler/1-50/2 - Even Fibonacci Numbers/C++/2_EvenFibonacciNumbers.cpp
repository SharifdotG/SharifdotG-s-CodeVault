#include <bits/stdc++.h>

using namespace std;

int main() {
    int sum = 0;

    int a = 1;
    int b = 2;
    int c = 0;

    while (b < 4000000) {
        if (b % 2 == 0) sum += b;

        c = a + b;
        a = b;
        b = c;
    }

    cout << sum << endl;
    
    return 0;
}

// Answer: 4613732