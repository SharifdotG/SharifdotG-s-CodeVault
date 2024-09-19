#include <bits/stdc++.h>

using namespace std;

int main() {
    int spentTime, averageSpeed;
    cin >> spentTime >> averageSpeed;

    double liters = spentTime * averageSpeed / 12.0;

    cout << fixed << setprecision(3) << liters << endl;
    
    return 0;
}