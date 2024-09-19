#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int arrayLength;
        cin >> arrayLength;

        int array[arrayLength];

        for (int i = 0; i < arrayLength; i++) {
            cin >> array[i];
        }

        int left = 0, right = arrayLength - 1;

        while (left < right) {
            cout << array[left] << " " << array[right] << " ";

            left++, right--;
        }

        if (left == right) {
            cout << array[left];
        }

        cout << endl;
    }
    
    return 0;
}