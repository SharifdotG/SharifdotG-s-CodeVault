#include <bits/stdc++.h>

using namespace std;

int main() {
    double radius;
    cin >> radius;

    double volume = (4.0 / 3) * 3.14159 * radius * radius * radius;

    cout << fixed << setprecision(3) << "VOLUME = " << volume << endl;
    
    return 0;
}