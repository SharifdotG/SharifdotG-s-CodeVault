#include <bits/stdc++.h>

using namespace std;

int main() {
    int citizens;
    cin >> citizens;

    int max = 0;

    int welfare[citizens];

    for (int i = 0; i < citizens; i++) {
        cin >> welfare[i];

        if (welfare[i] > max) max = welfare[i];
    }

    int burles = 0;

    for (int i = 0; i < citizens; i++) {
        burles += max - welfare[i];
    }

    cout << burles << endl;

    return 0;
}