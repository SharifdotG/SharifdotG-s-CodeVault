#include <bits/stdc++.h>

using namespace std;

int main() {
    int companies, requests;
    cin >> companies >> requests;

    int locations[companies];

    for (int i = 0; i < companies; i++) cin >> locations[i];

    while (requests--) {
        int operation, form1, form2;
        cin >> operation >> form1 >> form2;

        if (operation == 1) locations[form1 - 1] = form2;
        else cout << abs(locations[form1 - 1] - locations[form2 - 1]) << endl;
    }

    return 0;
}