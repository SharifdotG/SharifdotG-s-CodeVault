#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, z;
    cin >> x >> z;

    while (z <= x) {
        cin >> z;
    }

    int sum = 0, count = 0;

    for (int i = x; sum <= z; i++) {
        sum += i;
        count++;
    }

    cout << count << endl;
    
    return 0;
}