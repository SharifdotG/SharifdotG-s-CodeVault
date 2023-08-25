#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfDrinks;
    cin >> numberOfDrinks;

    int volumeOfOrangeJuice = 0;

    for (int i = 0; i < numberOfDrinks; i++) {
        int volumeFractionOfOrangeJuice;
        cin >> volumeFractionOfOrangeJuice;

        volumeOfOrangeJuice += volumeFractionOfOrangeJuice;
    }

    cout << fixed << setprecision(12) << (double) volumeOfOrangeJuice / numberOfDrinks;
    
    return 0;
}