#include <bits/stdc++.h>

using namespace std;

int main() {
    double salary;
    cin >> salary;

    double tax = 0;

    if (salary > 4500) {
        tax += (salary - 4500) * 0.28;
        salary = 4500;
    }

    if (salary > 3000) {
        tax += (salary - 3000) * 0.18;
        salary = 3000;
    }

    if (salary > 2000) {
        tax += (salary - 2000) * 0.08;
        salary = 2000;
    }

    if (tax == 0) cout << "Isento" << endl;
    else cout << "R$ " << fixed << setprecision(2) << tax << endl;
    
    return 0;
}