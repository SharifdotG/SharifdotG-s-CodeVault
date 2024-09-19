#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int hours, minutes;
        cin >> hours >> minutes;

        cout << (23 - hours) * 60 + (60 - minutes) << endl;
    }
    
    return 0;
}