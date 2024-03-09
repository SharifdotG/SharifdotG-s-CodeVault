#include <bits/stdc++.h>

using namespace std;

int main() {
    double costPerSquareMeter, numberOfLawns;
    cin >> costPerSquareMeter >> numberOfLawns;

    double totalCost = 0;

    for (int i = 0; i < numberOfLawns; i++) {
        double width, length;
        cin >> width >> length;

        totalCost += width * length * costPerSquareMeter;
    }

    cout << fixed << setprecision(7) << totalCost << endl;

    return 0;
}