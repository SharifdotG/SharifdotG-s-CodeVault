#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int xC, yC;
        cin >> xC >> yC;
        int r;
        cin >> r;
        int xP, yP;
        cin >> xP >> yP;

        int distance = (xC - xP) * (xC - xP) + (yC - yP) * (yC - yP);
        int radius = r * r;

        if (distance > radius) {
            cout << "The point is not inside the circle" << endl;
        } else {
            cout << "The point is inside the circle" << endl;
        }
    }
    
    return 0;
}