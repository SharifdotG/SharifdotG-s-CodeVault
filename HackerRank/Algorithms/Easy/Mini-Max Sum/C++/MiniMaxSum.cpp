#include <bits/stdc++.h>

using namespace std;

int main() {
    long long array[5], sum = 0, minimum = 0, maximum = 0;
    cin >> array[0] >> array[1] >> array[2] >> array[3] >> array[4];

    for (int i = 0; i < 5; i++) {
        sum += array[i];
    }

    minimum = sum - array[0];
    maximum = sum - array[0];

    for (int i = 1; i < 5; i++) {
        if (sum - array[i] < minimum) {
            minimum = sum - array[i];
        }

        if (sum - array[i] > maximum) {
            maximum = sum - array[i];
        }
    }

    cout << minimum << " " << maximum << endl;
    
    return 0;
}