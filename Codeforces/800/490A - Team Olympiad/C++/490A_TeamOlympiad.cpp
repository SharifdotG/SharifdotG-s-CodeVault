#include <bits/stdc++.h>

using namespace std;

int main() {
    int children;
    cin >> children;

    int programming[children];
    int maths[children];
    int pe[children];

    int programmingCount = 0;
    int mathCount = 0;
    int peCount = 0;

    for (int i = 0; i < children; i++) {
        int subject;
        cin >> subject;

        if (subject == 1) {
            programming[programmingCount] = i + 1;
            programmingCount++;
        } else if (subject == 2) {
            maths[mathCount] = i + 1;
            mathCount++;
        } else {
            pe[peCount] = i + 1;
            peCount++;
        }
    }

    int teams = min(programmingCount, min(mathCount, peCount));

    cout << teams << endl;

    for (int i = 0; i < teams; i++) {
        cout << programming[i] << " " << maths[i] << " " << pe[i] << endl;
    }

    return 0;
}