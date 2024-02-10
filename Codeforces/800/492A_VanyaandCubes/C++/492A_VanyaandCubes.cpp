#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfCubes;
    cin >> numberOfCubes;

    int sumOfCubes = 0;
    
    for (int i = 1; i <= numberOfCubes; i++) {
        sumOfCubes += i * (i + 1) / 2;

        if (sumOfCubes > numberOfCubes) {
            cout << i - 1 << endl;
            break;
        } else if (sumOfCubes == numberOfCubes) {
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}