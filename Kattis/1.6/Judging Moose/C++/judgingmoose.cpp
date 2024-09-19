#include <bits/stdc++.h>

using namespace std;

int main() {
    int leftTines, rightTines;
    cin >> leftTines >> rightTines;

    if (leftTines == 0 && rightTines == 0) {
        cout << "Not a moose" << endl;
    } else if (leftTines == rightTines) {
        cout << "Even " << leftTines + rightTines << endl;
    } else {
        cout << "Odd " << max(leftTines, rightTines) * 2 << endl;
    }

    return 0;
}
