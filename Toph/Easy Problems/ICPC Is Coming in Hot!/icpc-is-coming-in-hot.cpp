#include <bits/stdc++.h>

using namespace std;

int main() {
    string largeNumber;
    cin >> largeNumber;

    char digitMostUsed = *max_element(
        largeNumber.begin(), largeNumber.end(), [&](char a, char b) {
            return count(largeNumber.begin(), largeNumber.end(), a) < count(largeNumber.begin(), largeNumber.end(), b);
        }
    );

    cout << digitMostUsed << endl;
    
    return 0;
}