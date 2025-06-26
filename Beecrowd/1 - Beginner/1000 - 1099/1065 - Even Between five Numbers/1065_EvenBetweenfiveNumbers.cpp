#include <bits/stdc++.h>

using namespace std;

int main() {
    int even = 0;

    for (int i = 0; i < 5; i++) {
        int number;
        cin >> number;

        if (number % 2 == 0) even++;
    }

    cout << even << " valores pares" << endl;
    
    return 0;
}