#include <bits/stdc++.h>

using namespace std;

int main() {
    int numbers[4];
    cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3];

    sort(numbers, numbers + 4);

    cout << numbers[0] * numbers[2] << endl;

    return 0;
}