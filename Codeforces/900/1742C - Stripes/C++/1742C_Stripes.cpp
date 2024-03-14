#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        bool isBlue = true;
        
        for (int i = 0; i < 8; i++) {
            string stripe;
            cin >> stripe;
            
            if (stripe == "RRRRRRRR") isBlue = false;
        }

        cout << (isBlue ? "B" : "R") << endl;
    }
    
    return 0;
}