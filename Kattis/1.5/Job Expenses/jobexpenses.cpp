#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfExpenses, total = 0;
    cin >> numberOfExpenses;

    for (int i = 0; i < numberOfExpenses; ++i) {
        int expense;
        cin >> expense;

        if (expense < 0) {
            total += expense;
        }
    }

    cout << -total << endl;

    return 0;
}