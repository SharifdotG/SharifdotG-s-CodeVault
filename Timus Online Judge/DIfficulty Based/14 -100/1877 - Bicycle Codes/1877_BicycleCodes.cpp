#include <bits/stdc++.h>

using namespace std;

int main() {
    int firstLock, secondLock;
    cin >> firstLock >> secondLock;

    if (firstLock % 2 == 0 || secondLock % 2 == 1) cout << "yes" << endl;
    else cout << "no" << endl;
    
    return 0;
}