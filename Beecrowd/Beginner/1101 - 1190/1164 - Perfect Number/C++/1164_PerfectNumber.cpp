#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        int number, sum = 0;
        cin >> number;

        for (int j = 1; j < number; j++) {
            if (number % j == 0) {
                sum += j;
            }
        }
        
        if (sum == number) {
            cout << number << " eh perfeito" << endl;
        } else cout << number << " nao eh perfeito" << endl;
    }
    
    return 0;
}