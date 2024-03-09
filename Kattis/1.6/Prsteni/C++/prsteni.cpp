#include <bits/stdc++.h>

using namespace std;

int main() {
    int rings;
    cin >> rings;

    int radiiOfRings[rings];
    for (int i = 0; i < rings; i++) {
        cin >> radiiOfRings[i];
    }

    int firstRadii = radiiOfRings[0];
    
    for (int i = 1; i < rings; i++) {
        int gcd = __gcd(firstRadii, radiiOfRings[i]);
        cout << firstRadii / gcd << "/" << radiiOfRings[i] / gcd << endl;
    }

    return 0;
}
