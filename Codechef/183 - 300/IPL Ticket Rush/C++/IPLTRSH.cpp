#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, students, tickets;
    cin >> testCases;

    while (testCases--) {
        cin >> students >> tickets;
        
        if (students <= tickets) cout << "0" << endl;
        else cout << students - tickets << endl;
    }
    
    return 0;
}