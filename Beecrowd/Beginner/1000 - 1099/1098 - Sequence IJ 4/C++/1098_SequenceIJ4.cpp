#include <bits/stdc++.h>

using namespace std;

int main() {
    float i = 0, j = 1;

    while (i <= 2.1) {
        cout << "I=" << i << " J=" << j + i << endl;
        cout << "I=" << i << " J=" << j + 1 + i << endl;
        cout << "I=" << i << " J=" << j + 2 + i << endl;

        i += 0.2;
    }
    
    return 0;
}