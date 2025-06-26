#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        string number;
        cin >> number;

        reverse(number.begin(), number.end());
        
        stringstream ss(number);

        long long n;
        ss >> n;

        cout << n << endl;
    }
    
    return 0;
}