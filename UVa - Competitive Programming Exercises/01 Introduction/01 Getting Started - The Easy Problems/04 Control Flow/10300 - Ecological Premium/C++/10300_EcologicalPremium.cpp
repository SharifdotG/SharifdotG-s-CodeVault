#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, farmers, farmland, animals, environmentFriendlyness, sum;

    cin >> testCases;

    while (testCases--) {
        cin >> farmers;

        sum = 0;

        while (farmers--) {
            cin >> farmland >> animals >> environmentFriendlyness;

            sum += farmland * environmentFriendlyness;
        }

        cout << sum << endl;
    }
    
    return 0;
}