#include <bits/stdc++.h>

using namespace std;

int main() {
    int number, x, y;
    cin >> number;

    for (int i = 0; i < number; i++) {
        cin >> x >> y;

        if (x % 2 == 0) x++;

        int sum = 0;

        for (int j = 0; j < y; j++) {
            sum += x;
            x += 2;
        }

        cout << sum << endl;
    }
    
    return 0;
}