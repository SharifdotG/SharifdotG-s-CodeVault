#include <bits/stdc++.h>

using namespace std;

int main() {
    int arraySize, tallest = 0, count = 0;
    cin >> arraySize;

    int array[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cin >> array[i];

        if (array[i] > tallest) {
            tallest = array[i];
        }
    }

    for (int i = 0; i < arraySize; i++) {
        if (array[i] == tallest) {
            count++;
        }
    }

    cout << count << endl;
    
    return 0;
}