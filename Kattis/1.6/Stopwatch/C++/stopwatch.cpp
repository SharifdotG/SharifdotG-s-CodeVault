#include <bits/stdc++.h>

using namespace std;

int main() {
    int presses;
    cin >> presses;

    if (presses % 2 == 1) {
        cout << "still running" << endl;
    } else {
        int total = 0;

        for (int i = 0; i < presses; i += 2) {
            int start, end;
            cin >> start >> end;

            total += end - start;
        }

        cout << total << endl;
    }

    return 0;
}
