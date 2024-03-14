#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        double x, y;
        cin >> x >> y;

        double a = 12;
        double b = -4 * (x + y);
        double constant = x * y;

        double discriminant = sqrt(b * b - 4 * a * constant);
        double height1 = (-b + discriminant) / (2 * a);
        double height2 = (-b - discriminant) / (2 * a);

        double volume1 = (x - 2 * height1) * (y - 2 * height1) * height1;
        double volume2 = (x - 2 * height2) * (y - 2 * height2) * height2;

        cout << fixed << setprecision(10) << max(volume1, volume2) << endl;
    }

    return 0;
}
