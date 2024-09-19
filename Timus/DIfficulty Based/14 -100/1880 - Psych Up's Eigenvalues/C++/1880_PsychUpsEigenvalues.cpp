#include <bits/stdc++.h>

using namespace std;

int main() {
    int eigenvalues, eigenvalue, result = 0;
    set<int> set1, set2;

    cin >> eigenvalues;
    while (eigenvalues--) {
        cin >> eigenvalue;
        set1.insert(eigenvalue);
    }

    cin >> eigenvalues;
    while (eigenvalues--) {
        cin >> eigenvalue;

        if (set1.count(eigenvalue)) {
            set2.insert(eigenvalue);
        }
    }

    cin >> eigenvalues;
    while (eigenvalues--) {
        cin >> eigenvalue;

        if (set2.count(eigenvalue)) {
            result++;
        }
    }

    cout << result << endl;
    
    return 0;
}