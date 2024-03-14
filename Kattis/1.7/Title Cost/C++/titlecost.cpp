#include <bits/stdc++.h>


using namespace std;

int main() {
    string movieTitle;
    double capOnCost;
    cin >> movieTitle >> capOnCost;

    double titleLength = movieTitle.length();
    double transmissionCost = min(titleLength, capOnCost);

    cout << fixed << setprecision(8) << transmissionCost << endl;

    return 0;
}
