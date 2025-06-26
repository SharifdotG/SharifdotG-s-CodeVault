#include <bits/stdc++.h>

using namespace std;

int main() {
    int ginFizzes;
    cin >> ginFizzes;

    cout << 45 * ginFizzes << " ml gin" << endl;
    cout << 30 * ginFizzes << " ml fresh lemon juice" << endl;
    cout << 10 * ginFizzes << " ml simple syrup" << endl;
    
    if (ginFizzes == 1) {
        cout << "1 slice of lemon" << endl;
    } else {
        cout << ginFizzes << " slices of lemon" << endl;
    }

    return 0;
}