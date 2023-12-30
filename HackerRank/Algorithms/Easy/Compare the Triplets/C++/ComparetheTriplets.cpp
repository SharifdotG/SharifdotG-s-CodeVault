#include <bits/stdc++.h>

using namespace std;

int main() {
    int aTriplet[3], bTriplet[3], alice = 0, bob = 0;
    cin >> aTriplet[0] >> aTriplet[1] >> aTriplet[2];
    cin >> bTriplet[0] >> bTriplet[1] >> bTriplet[2];

    for (int i = 0; i < 3; i++) {
        if (aTriplet[i] > bTriplet[i]) {
            alice++;
        } else if (aTriplet[i] < bTriplet[i]) {
            bob++;
        }
    }

    cout << alice << " " << bob << endl;
    
    return 0;
}