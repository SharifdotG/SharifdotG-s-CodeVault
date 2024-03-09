#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string apartmentNumber;
        cin >> apartmentNumber;

        int boringApartments = 0;

        if (apartmentNumber.length() == 1) boringApartments = 1;
        else if (apartmentNumber.length() == 2) boringApartments = 3;
        else if (apartmentNumber.length() == 3) boringApartments = 6;
        else if (apartmentNumber.length() == 4) boringApartments = 10;

        int firstDigit = apartmentNumber[0] - '0';

        boringApartments += (firstDigit - 1) * 10;

        cout << boringApartments << endl;
    }

    return 0;
}