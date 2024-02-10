#include <bits/stdc++.h>

using namespace std;

int main() {
    int ageInDays;
    cin >> ageInDays;

    int years = ageInDays / 365;
    ageInDays -= years * 365;

    int months = ageInDays / 30;
    ageInDays -= months * 30;

    cout << years << " ano(s)" << endl;
    cout << months << " mes(es)" << endl;
    cout << ageInDays << " dia(s)" << endl;
    
    return 0;
}