#include <bits/stdc++.h>

using namespace std;

int main() {
    int arraySize, day, month, sum = 0, count = 0;
    cin >> arraySize;

    int array[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cin >> array[i];
    }

    cin >> day >> month;

    for (int i = 0; i < arraySize; i++) {
        sum = 0;

        for (int j = i; j < i + month; j++) {
            sum += array[j];
        }

        if (sum == day) {
            count++;
        }
    }

    cout << count << endl;
    
    return 0;
}