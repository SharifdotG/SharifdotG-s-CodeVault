#include <bits/stdc++.h>

using namespace std;

int main() {
    int sideLength, radius;
    cin >> sideLength >> radius;

    if (2 * sideLength * sideLength <= 4 * radius * radius) {
        cout << "fits" << endl;
    } else  cout << "nope" << endl;

    return 0;
}
