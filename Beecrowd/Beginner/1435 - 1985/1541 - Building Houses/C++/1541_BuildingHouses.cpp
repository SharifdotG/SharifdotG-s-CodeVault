#include <bits/stdc++.h>

using namespace std;

int main() {
    int size1, size2, maxAllowed;

    while (cin >> size1 && size1 != 0) {
        cin >> size2 >> maxAllowed;

        int area = size1 * size2;
        int side = sqrt((area * 100) / maxAllowed);

        cout << side << endl;
    }

    return 0;
}
