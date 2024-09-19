#include <bits/stdc++.h>

using namespace std;

int main() {
    int arraySize, sum = 0;
    cin >> arraySize;

    int numbers[arraySize];
    for (int i = 0; i < arraySize; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    cout << sum << endl;
    
    return 0;
}