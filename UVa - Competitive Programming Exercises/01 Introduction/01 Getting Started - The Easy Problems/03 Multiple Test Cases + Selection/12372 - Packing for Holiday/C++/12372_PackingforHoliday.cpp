#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, lenght, width, height;

    cin >> testCases;

    for (int i = 1; i <= testCases; i++) {
        cin >> lenght >> width >> height;

        if (lenght <= 20 && width <= 20 && height <= 20) {
            cout << "Case " << i << ": good" << endl;
        } else {
            cout << "Case " << i << ": bad" << endl;
        }
    }
    
    return 0;
}