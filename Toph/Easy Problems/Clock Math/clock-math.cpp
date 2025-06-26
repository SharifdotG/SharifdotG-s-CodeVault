#include <bits/stdc++.h>

using namespace std;

int main() {
    int hours, minutes;
    cin >> hours >> minutes;

    double angle = abs(30 * hours - 5.5 * minutes);

    if (angle > 180) {
        angle = 360 - angle;
    }

    cout << fixed << setprecision(4) << angle << endl;
    
    return 0;
}