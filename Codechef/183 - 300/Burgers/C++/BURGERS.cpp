#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, patties, buns;
    cin >> testCases;

    while (testCases--) {
        cin >> patties >> buns;
        cout << min(patties, buns) << endl;
    }
    
    return 0;
}