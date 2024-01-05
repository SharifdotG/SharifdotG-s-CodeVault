#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    for (int i = 1; i <= testCases; i++) {
        int numbers[3];
        cin >> numbers[0] >> numbers[1] >> numbers[2];

        sort(numbers, numbers + 3);

        cout << "Case " << i << ": ";
        cout << numbers[0] << " " << numbers[1] << " " << numbers[2] << endl;
    }
    
    return 0;
}