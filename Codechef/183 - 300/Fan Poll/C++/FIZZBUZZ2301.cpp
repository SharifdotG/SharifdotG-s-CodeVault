#include <bits/stdc++.h>

using namespace std;

int main() {
    int dhoni, rohit, kohli;
    cin >> dhoni >> rohit >> kohli;

    if (dhoni == max(dhoni, max(rohit, kohli))) {
        cout << "YES" << endl;
    } else cout << "NO" << endl;
    
    return 0;
}