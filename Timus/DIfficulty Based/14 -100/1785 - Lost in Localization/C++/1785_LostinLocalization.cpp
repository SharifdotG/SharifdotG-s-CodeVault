#include <bits/stdc++.h>

using namespace std;

int main() {
    int monsters;
    cin >> monsters;

    if (monsters >= 1 && monsters <= 4) {
        cout << "few" << endl;
    } else if (monsters >= 5 && monsters <= 9) {
        cout << "several" << endl;
    } else if (monsters >= 10 && monsters <= 19) {
        cout << "pack" << endl;
    } else if (monsters >= 20 && monsters <= 49) {
        cout << "lots" << endl;
    } else if (monsters >= 50 && monsters <= 99) {
        cout << "horde" << endl;
    } else if (monsters >= 100 && monsters <= 249) {
        cout << "throng" << endl;
    } else if (monsters >= 250 && monsters <= 499) {
        cout << "swarm" << endl;
    } else if (monsters >= 500 && monsters <= 999) {
        cout << "zounds" << endl;
    } else if (monsters >= 1000) {
        cout << "legion" << endl;
    }
    
    return 0;
}