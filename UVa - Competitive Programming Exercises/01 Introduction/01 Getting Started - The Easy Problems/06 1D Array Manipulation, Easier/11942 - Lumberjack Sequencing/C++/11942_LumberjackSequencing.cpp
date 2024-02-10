#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    cout << "Lumberjacks:" << endl;

    while (testCases--) {
        int lumberjacks[10];
        bool ordered = true;

        for (int i = 0; i < 10; i++) {
            cin >> lumberjacks[i];
        }

        if (lumberjacks[0] < lumberjacks[1]) {
            for (int i = 1; i < 9; i++) {
                if (lumberjacks[i] > lumberjacks[i + 1]) {
                    ordered = false;
                    break;
                }
            }
        } else {
            for (int i = 1; i < 9; i++) {
                if (lumberjacks[i] < lumberjacks[i + 1]) {
                    ordered = false;
                    break;
                }
            }
        }

        if (ordered) {
            cout << "Ordered" << endl;
        } else {
            cout << "Unordered" << endl;
        }
    }
    
    return 0;
}