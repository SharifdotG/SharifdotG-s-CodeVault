#include <bits/stdc++.h>

using namespace std;

int main() {
    int firstCordinate, secondCordinate, thirdCordinate;
    cin >> firstCordinate >> secondCordinate >> thirdCordinate;

    int max = firstCordinate;
    if (secondCordinate > max) max = secondCordinate;
    if (thirdCordinate > max) max = thirdCordinate;

    int min = firstCordinate;
    if (secondCordinate < min) min = secondCordinate;
    if (thirdCordinate < min) min = thirdCordinate;

    cout << max - min;

    return 0;
}