#include <bits/stdc++.h>

using namespace std;

int main() {
    int teams, count = 0;
    cin >> teams;

    int uniform[teams][2];

    for (int i = 0; i < teams; i++) {
        cin >> uniform[i][0] >> uniform[i][1];
    }

    for (int i = 0; i < teams; i++) {
        for (int j = i; j >= 0; j--) {
            if (uniform[i][0] == uniform[j][1]) count++;
            if (uniform[i][1] == uniform[j][0]) count++;
        }
    }

    cout << count;

    return 0;
}