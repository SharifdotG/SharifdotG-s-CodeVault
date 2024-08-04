#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        long long a, b, c;
        cin >> a >> b >> c;
        
        long long lcm = a * b;
        
        a = lcm;
        while (lcm <= c) {
            cout << lcm << endl;
            lcm += a;
        }

        cout << endl;
    }
    
    return 0;
}