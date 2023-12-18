#include <bits/stdc++.h>

using namespace std;

int main() {
    int i = 1, j = 7;

    while (i <= 9) {
        for (int k = 0; k < 3; k++) {
            cout << "I=" << i << " J=" << j << endl;
            j--;
        }

        i += 2;
        j += 5;
    }
    
    return 0;
}