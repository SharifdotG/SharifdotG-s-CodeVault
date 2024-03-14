#include <bits/stdc++.h>

using namespace std;

int main() {
    double salary;
    cin >> salary;

    double newSalary;
    int percentage;

    if (salary <= 400) {
        newSalary = salary * 1.15;
        percentage = 15;
    } else if (salary <= 800) {
        newSalary = salary * 1.12;
        percentage = 12;
    } else if (salary <= 1200) {
        newSalary = salary * 1.10;
        percentage = 10;
    } else if (salary <= 2000) {
        newSalary = salary * 1.07;
        percentage = 7;
    } else {
        newSalary = salary * 1.04;
        percentage = 4;
    }

    cout << "Novo salario: " << fixed << setprecision(2) << newSalary << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << newSalary - salary << endl;
    cout << "Em percentual: " << percentage << " %" << endl;
    
    return 0;
}