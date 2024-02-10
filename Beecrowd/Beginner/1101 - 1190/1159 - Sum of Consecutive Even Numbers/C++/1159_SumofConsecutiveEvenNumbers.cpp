#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;

    while (cin >> number && number != 0) {
        int sum = 0;
        
        if (number % 2 == 0) {
            for (int i = 0; i < 5; i++) {
                sum += number;
                number += 2;
            }
        } else {
            number++;
            
            for (int i = 0; i < 5; i++) {
                sum += number;
                number += 2;
            }
        }

        cout << sum << endl;
    }
    
    return 0;
}