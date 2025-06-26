#include <bits/stdc++.h>

using namespace std;

int main() {
    int meatTypes;
    cin >> meatTypes;

    string meatType;

    if (meatTypes == 1) {
            cin >> meatType;
            cout << meatType << endl;
            
            return 0;
    }

    while (meatTypes--) {
        cin >> meatType;
    }

    cout << "blandad best" << endl;

    return 0;
}