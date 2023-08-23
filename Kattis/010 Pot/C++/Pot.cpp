#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfAddends, task, sum = 0;
    cin >> numberOfAddends;

    while (numberOfAddends--) {
        cin >> task;
        sum += pow(task / 10, task % 10);
    }

    cout << sum << endl;

    return 0;
}