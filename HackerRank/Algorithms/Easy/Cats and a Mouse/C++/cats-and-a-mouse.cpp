#include <bits/stdc++.h>

using namespace std;

int main() {
    int queries;
    cin >> queries;

    while (queries--) {
        int x, y, z;
        cin >> x >> y >> z;

        int distanceA = abs(x - z);
        int distanceB = abs(y - z);

        if (distanceA < distanceB) {
            cout << "Cat A" << endl;
        } else if (distanceA > distanceB) {
            cout << "Cat B" << endl;
        } else {
            cout << "Mouse C" << endl;
        }
    }

    return 0;
}