#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;

    for (int i = 1; i <= number; i++) {
        if (i % 3 == 0) {
            cout << " " << i;
        } else {
            int j = i;

            while (j) {
                if (j % 10 == 3) {
                    cout << " " << i;
                    break;
                }
                
                j /= 10;
            }
        }
    }
    
    return 0;
}