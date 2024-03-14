#include <bits/stdc++.h>

using namespace std;

int main() {
    int bacteria;
    cin >> bacteria;

    int count = 0;

    while (bacteria > 0) {
        if (bacteria % 2 == 1) count++;
        bacteria /= 2;
    }

    cout << count << endl;
    
    return 0;
}