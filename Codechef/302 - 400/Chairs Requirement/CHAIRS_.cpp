#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int students, chairs;
        cin >> students >> chairs;

        if (students <= chairs) {
            cout << "0" << endl;
        } else {
            cout << students - chairs << endl;
        }
    }
    
    return 0;
}