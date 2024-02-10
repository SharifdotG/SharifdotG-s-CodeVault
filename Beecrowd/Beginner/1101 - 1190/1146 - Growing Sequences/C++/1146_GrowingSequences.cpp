#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;

    while (number != 0) {
        for (int i = 1; i <= number; i++) {
            if (i == number) cout << i << endl;
            else cout << i << " ";
        }

        cin >> number;
    }
    
    return 0;
}