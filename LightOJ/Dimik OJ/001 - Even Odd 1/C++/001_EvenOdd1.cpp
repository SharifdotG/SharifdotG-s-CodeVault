#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, number;
    cin >> testCases;

    while (testCases--) {
        cin >> number;
        
        if (number % 2 == 0) cout << "even" << endl;
        else cout << "odd" << endl;
    }
    
    return 0;
}