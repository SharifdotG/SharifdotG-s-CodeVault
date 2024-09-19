#include <bits/stdc++.h>

using namespace std;

int moves(int n) {
    if (n == 1) {
        return 1;
    }
    
    return 2 * moves(n - 1) + 1;
}

void towerOfHanoi(int n, int from, int to, int aux) {
    if (n == 1) {
        cout << from << " " << to << endl;
        return;
    }
    
    towerOfHanoi(n - 1, from, aux, to);
    cout << from << " " << to << endl;
    towerOfHanoi(n - 1, aux, to, from);
}

int main() {
    int n;
    cin >> n;

    cout << moves(n) << endl;
    towerOfHanoi(n, 1, 3, 2);
    
    return 0;
}