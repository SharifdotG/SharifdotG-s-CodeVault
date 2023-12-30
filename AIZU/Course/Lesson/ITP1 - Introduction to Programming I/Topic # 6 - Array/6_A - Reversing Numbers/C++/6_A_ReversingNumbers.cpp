#include <bits/stdc++.h>

using namespace std;

int main() {
    int sequenceSize;
    cin >> sequenceSize;

    int numbers[sequenceSize];
    for (int i = 0; i < sequenceSize; i++) {
        cin >> numbers[i];
    }

    for (int i = sequenceSize - 1; i >= 0; i--) {
        cout << numbers[i] << (i == 0 ? "\n" : " ");
    }
    
    return 0;
}