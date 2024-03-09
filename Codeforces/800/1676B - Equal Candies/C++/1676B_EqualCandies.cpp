#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int boxes;
        cin >> boxes;

        int candies[boxes];
        int sum = 0;
        for (int i = 0; i < boxes; i++) {
            cin >> candies[i];
            sum += candies[i];
        }

        sort(candies, candies + boxes);

        cout << sum - candies[0] * boxes << endl;
    }

    return 0;
}