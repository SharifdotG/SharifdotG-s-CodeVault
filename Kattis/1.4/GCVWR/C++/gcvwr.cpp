#include <bits/stdc++.h>

using namespace std;

int main() {
    int gcvwr, truckWeight, numberOfItems;
    cin >> gcvwr >> truckWeight >> numberOfItems;

    int totalWeight = 0;

    for (int i = 0; i < numberOfItems; i++) {
        int itemWeight;
        cin >> itemWeight;

        totalWeight += itemWeight;
    }

    cout << ((gcvwr - truckWeight) * 9 / 10) - totalWeight << endl;

    return 0;
}