#include <bits/stdc++.h>

using namespace std;

int main() {
    int cawCounter = 0, cawValue = 0;

    while (cawCounter < 3) {
        string caw;
        getline(cin, caw);

        if (caw == "--*") cawValue += 1;
        else if (caw == "-*-") cawValue += 2;
        else if (caw == "-**") cawValue += 3;
        else if (caw == "*--") cawValue += 4;
        else if (caw == "*-*") cawValue += 5;
        else if (caw == "**-") cawValue += 6;
        else if (caw == "***") cawValue += 7;
        else if (caw == "caw caw") {
            cout << cawValue << endl;
            
            cawValue = 0;
            cawCounter++;
        }
    }

    return 0;
}