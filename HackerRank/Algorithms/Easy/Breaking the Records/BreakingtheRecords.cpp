#include <bits/stdc++.h>

using namespace std;

int main() {
    int arraySize, highest = 0, lowest = 0, highestCount = 0, lowestCount = 0;
    cin >> arraySize;

    int array[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cin >> array[i];

        if (i == 0) {
            highest = array[i];
            lowest = array[i];
        } else {
            if (array[i] > highest) {
                highest = array[i];
                highestCount++;
            } else if (array[i] < lowest) {
                lowest = array[i];
                lowestCount++;
            }
        }
    }

    cout << highestCount << " " << lowestCount << endl;
    
    return 0;
}