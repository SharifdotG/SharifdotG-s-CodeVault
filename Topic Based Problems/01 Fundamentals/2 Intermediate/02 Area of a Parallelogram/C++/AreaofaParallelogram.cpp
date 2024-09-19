#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double base, height;
    cin >> base >> height;

    double area = base * height;

    cout << fixed << setprecision(1) << area << endl;
    
    return 0;
}