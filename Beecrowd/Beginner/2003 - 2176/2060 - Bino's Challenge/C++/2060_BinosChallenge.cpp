#include <bits/stdc++.h>

using namespace std;

int main() {
    int numbersInList;
    cin >> numbersInList;

    int multiplesOf2 = 0, multiplesOf3 = 0, multiplesOf4 = 0, multiplesOf5 = 0;

    while (numbersInList--) {
        int number;
        cin >> number;

        if (number % 2 == 0) multiplesOf2++;
        if (number % 3 == 0) multiplesOf3++;
        if (number % 4 == 0) multiplesOf4++;
        if (number % 5 == 0) multiplesOf5++;
    }

    cout << multiplesOf2 << " Multiplo(s) de 2" << endl;
    cout << multiplesOf3 << " Multiplo(s) de 3" << endl;
    cout << multiplesOf4 << " Multiplo(s) de 4" << endl;
    cout << multiplesOf5 << " Multiplo(s) de 5" << endl;

    return 0;
}