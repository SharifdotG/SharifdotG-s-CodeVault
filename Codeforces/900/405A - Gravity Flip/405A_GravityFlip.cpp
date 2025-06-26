#include <bits/stdc++.h>

using namespace std;

int main() {
    int columns;
    cin >> columns;

    int cubes[columns];
    for (int i = 0; i < columns; i++) cin >> cubes[i];

    sort(cubes, cubes + columns);

    for (int i = 0; i < columns; i++) {
        cout << cubes[i];
        if (i != columns - 1) cout << " ";
    }

    cout << endl;
    
    return 0;
}