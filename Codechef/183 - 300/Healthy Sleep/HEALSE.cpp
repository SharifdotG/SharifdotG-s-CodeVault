#include <bits/stdc++.h>

using namespace std;

int main() {
    int sleepHours;
    cin >> sleepHours;

    if (sleepHours < 8) {
        cout << "LESS" << endl;
    } else if (sleepHours == 8) {
        cout << "PERFECT" << endl;
    } else {
        cout << "MORE" << endl;
    }
    
    return 0;
}