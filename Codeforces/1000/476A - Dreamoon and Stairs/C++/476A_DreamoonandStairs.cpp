#include <bits/stdc++.h>

using namespace std;

int main() {
    int steps, multipleOf;
    cin >> steps >> multipleOf;
    
    int minimumSteps = steps / 2 + steps % 2;

    while (minimumSteps % multipleOf != 0) {
        minimumSteps++;
    }

    if (minimumSteps > steps) {
        cout << -1 << endl;
    } else {
        cout << minimumSteps << endl;
    }
    
    return 0;
}