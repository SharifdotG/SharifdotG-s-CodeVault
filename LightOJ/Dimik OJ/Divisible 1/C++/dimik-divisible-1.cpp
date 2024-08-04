#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        long long a, b, c;
        cin >> a >> b >> c;

        long long start = a % c == 0 ? a : a + (c - a % c);

        for (long long i = start; i <= b; i += c) {
            cout << i << endl;
        }
        
        cout << endl;
    }
    
    return 0;
}