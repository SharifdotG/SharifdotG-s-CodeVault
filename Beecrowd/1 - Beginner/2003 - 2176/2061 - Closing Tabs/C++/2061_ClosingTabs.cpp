#include <bits/stdc++.h>

using namespace std;

int main() {
    int tabs, actions;
    cin >> tabs >> actions;

    while (actions--) {
        string action;
        cin >> action;

        if (action == "fechou") {
            tabs++;
        } else tabs--;
    }

    cout << tabs << endl;

    return 0;
}