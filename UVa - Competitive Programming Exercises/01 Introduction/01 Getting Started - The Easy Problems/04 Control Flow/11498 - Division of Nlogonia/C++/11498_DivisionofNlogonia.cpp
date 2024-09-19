#include <bits/stdc++.h>

using namespace std;

int main() {
    int queries, xDivisionPoint, yDivisionPoint, x, y;

    while (cin >> queries) {
        if (queries == 0) {
            break;
        }

        cin >> xDivisionPoint >> yDivisionPoint;

        for (int i = 0; i < queries; i++) {
            cin >> x >> y;

            if (x == xDivisionPoint || y == yDivisionPoint) {
                cout << "divisa" << endl;
            } else if (x > xDivisionPoint && y > yDivisionPoint) {
                cout << "NE" << endl;
            } else if (x < xDivisionPoint && y > yDivisionPoint) {
                cout << "NO" << endl;
            } else if (x < xDivisionPoint && y < yDivisionPoint) {
                cout << "SO" << endl;
            } else if (x > xDivisionPoint && y < yDivisionPoint) {
                cout << "SE" << endl;
            }
        }
    }
    
    return 0;
}