#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string name, postSecondarydate, birthdate;
        int courses;
        cin >> name >> postSecondarydate >> birthdate >> courses;
        
        int postSecondaryYear = stoi(postSecondarydate.substr(0, 4));
        int birthYear = stoi(birthdate.substr(0, 4));

        cout << name << " ";

        if (postSecondaryYear >= 2010 || birthYear >= 1991) {
            cout << "eligible" << endl;
        } else if (courses >= 41) {
            cout << "ineligible" << endl;
        } else {
            cout << "coach petitions" << endl;
        }
    }

    return 0;
}
