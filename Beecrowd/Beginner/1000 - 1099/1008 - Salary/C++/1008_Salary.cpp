#include <bits/stdc++.h>

using namespace std;

int main() {
    int number, hours;
    double SALARY;
    cin >> number >> hours >> SALARY;

    double totalSalary = hours * SALARY;

    cout << "NUMBER = " << number << "\n";

    cout << fixed << setprecision(2) << "SALARY = U$ " << totalSalary << endl;
    
    return 0;
}