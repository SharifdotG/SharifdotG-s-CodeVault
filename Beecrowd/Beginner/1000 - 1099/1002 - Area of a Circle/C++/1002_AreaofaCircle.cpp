#include <bits/stdc++.h>

using namespace std;

int main() {
    double radius;
    cin >> radius;

    double area = 3.14159 * radius * radius;

    cout << fixed << setprecision(4) << "A=" << area << endl;
    
    return 0;
}