#include <bits/stdc++.h>

using namespace std;

int main() {
    string name;
    double salary, sales;

    cin >> name >> salary >> sales;

    double totalSalary = salary + sales * 0.15;

    cout << fixed << setprecision(2) << "TOTAL = R$ " << totalSalary << endl;
    
    return 0;
}