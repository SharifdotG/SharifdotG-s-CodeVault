#include <bits/stdc++.h>

using namespace std;

int main() {
    int arraySize, divisor, count = 0;
    cin >> arraySize >> divisor;

    int array[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < arraySize; i++) {
        for (int j = i + 1; j < arraySize; j++) {
            if ((array[i] + array[j]) % divisor == 0) {
                count++;
            }
        }
    }

    cout << count << endl;
    
    return 0;
}