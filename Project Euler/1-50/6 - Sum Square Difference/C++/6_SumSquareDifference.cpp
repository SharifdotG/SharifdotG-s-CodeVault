#include <bits/stdc++.h>

using namespace std;

int main() {
    int sumSquareDifference = 0;

    int sumOfSquares = 0;
    int squareOfSum = 0;

    for (int i = 1; i <= 100; i++) {
        sumOfSquares += i * i;
        squareOfSum += i;
    }

    squareOfSum *= squareOfSum;

    sumSquareDifference = squareOfSum - sumOfSquares;

    cout << sumSquareDifference << endl;
    
    return 0;
}

// Answer: 25164150