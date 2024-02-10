#include <bits/stdc++.h>

using namespace std;

int main() {
    int limakWeight, bobWeight;
    cin >> limakWeight >> bobWeight;

    int years = 0;

    while (limakWeight <= bobWeight) {
        limakWeight *= 3;
        bobWeight *= 2;
        years++;
    }

    cout << years;
    
    return 0;
}