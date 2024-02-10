#include <bits/stdc++.h>

using namespace std;

int main() {
    int rows, columns;
    cin >> rows >> columns;

    if (rows * columns % 2 == 0) {
        cout << "[:=[first]" << endl;
    } else {
        cout << "[second]=:]" << endl;
    }
    
    return 0;
}