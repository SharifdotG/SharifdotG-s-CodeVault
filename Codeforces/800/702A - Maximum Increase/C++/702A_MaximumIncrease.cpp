#include <bits/stdc++.h>

using namespace std;

int main() {
    int integers;
    cin >> integers;

    int numbers[integers];
    for (int i = 0; i < integers; i++) {
        cin >> numbers[i];
    }

    int max = 1, count = 1;

    for (int i = 1; i < integers; i++) {
        if (numbers[i] > numbers[i - 1]) {
            count++;
        } else {
            if (count > max) {
                max = count;
            }
            
            count = 1;
        }
    }

    if (count > max) {
        max = count;
    }

    cout << max << endl;

    return 0;
}