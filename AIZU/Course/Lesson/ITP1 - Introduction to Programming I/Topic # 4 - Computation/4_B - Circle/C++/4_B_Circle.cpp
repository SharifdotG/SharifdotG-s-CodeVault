#include <bits/stdc++.h>

using namespace std;

int main() {
    double radius;
    cin >> radius;

    double area = radius * radius * M_PI;
    double circumference = 2 * radius * M_PI;

    cout << fixed << setprecision(6) << area << " " << circumference << endl;
    
    return 0;
}