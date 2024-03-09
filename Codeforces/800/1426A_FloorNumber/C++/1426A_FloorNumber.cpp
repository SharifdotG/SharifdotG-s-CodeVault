#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int petyasApartment, numberOfApartments;
        cin >> petyasApartment >> numberOfApartments;

        int floorNumber = 0;
        if (petyasApartment > 2) {
            floorNumber = (petyasApartment - 2) / numberOfApartments;
            if ((petyasApartment - 2) % numberOfApartments != 0) floorNumber++;
        }

        cout << floorNumber + 1 << endl;
    }
    
    return 0;
}