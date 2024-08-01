#include <bits/stdc++.h>

using namespace std;

int main() {
    string initial, target;
    int operations;
    cin >> initial >> target >> operations;

    int i = 0;
    for (; i < min(initial.size(), target.size()); i++) {
        if (initial[i] != target[i]) {
            break;
        }
    }

    int totalOperations = initial.size() + target.size() - 2 * i;
    if (totalOperations <= operations &&
            (operations - totalOperations) % 2 == 0 ||
        initial.size() + target.size() <= operations) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}