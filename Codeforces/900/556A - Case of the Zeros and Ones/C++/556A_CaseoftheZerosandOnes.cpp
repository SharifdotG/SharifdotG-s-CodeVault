#include <bits/stdc++.h>

using namespace std;

int main() {
    int length;
    cin >> length;

    string sequence;
    cin >> sequence;

    int numberOfZeros = 0;
    int numberOfOnes = 0;

    for (int i = 0; i < length; i++) {
        if (sequence[i] == '0') numberOfZeros++;
        else numberOfOnes++;
    }

    cout << abs(numberOfZeros - numberOfOnes) << endl;
    
    return 0;
}