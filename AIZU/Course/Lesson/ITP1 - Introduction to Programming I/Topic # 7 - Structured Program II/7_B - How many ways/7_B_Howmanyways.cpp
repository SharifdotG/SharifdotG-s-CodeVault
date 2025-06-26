#include <bits/stdc++.h>

using namespace std;

int main() {
    int number, sum;

    while (true) {
        cin >> number >> sum;

        int count = 0;

        if (number == 0 && sum == 0) {
            break;
        }

        for (int i = 1; i <= number; i++) {
            for (int j = i + 1; j <= number; j++) {
                for (int k = j + 1; k <= number; k++) {
                    if (i + j + k == sum) {
                        count++;
                    }
                }
            }
        }

        cout << count << endl;
    }
    
    return 0;
}