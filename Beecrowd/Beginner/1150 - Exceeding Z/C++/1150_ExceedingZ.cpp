#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, z, sum = 0, count = 0;
    cin >> x >> z;

    while (z <= x) cin >> z;

    for (int i = x; sum <= z; i++) {
        sum += i;
        count++;
    }

    cout << count << endl;
    
    return 0;
}