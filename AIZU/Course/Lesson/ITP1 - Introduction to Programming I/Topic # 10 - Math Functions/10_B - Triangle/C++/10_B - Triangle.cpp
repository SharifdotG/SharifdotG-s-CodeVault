#include <bits/stdc++.h>

using namespace std;

int main() {
    double sideA, sideB, angleC;
    cin >> sideA >> sideB >> angleC;

    double area = sideA * sideB * sin(angleC * M_PI / 180) / 2;
    double circumference = sideA + sideB + sqrt(sideA * sideA + sideB * sideB - 2 * sideA * sideB * cos(angleC * M_PI / 180));
    double height = sideB * sin(angleC * M_PI / 180);

    cout << fixed << setprecision(5) << area << endl << circumference << endl << height << endl;
    
    return 0;
}