#include <bits/stdc++.h>

using namespace std;

int main() {
    int dollars, bills = 0;
    cin >> dollars;

    while (dollars > 0) {
        if (dollars >= 100) {
            dollars -= 100;
            bills++;
        } else if (dollars >= 20) {
            dollars -= 20;
            bills++;
        } else if (dollars >= 10) {
            dollars -= 10;
            bills++;
        } else if (dollars >= 5) {
            dollars -= 5;
            bills++;
        } else {
            dollars -= 1;
            bills++;
        }
    }

    cout << bills;

    return 0;
}