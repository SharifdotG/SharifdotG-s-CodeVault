#include <bits/stdc++.h>

using namespace std;

int main() {
    int dataSets;
    cin >> dataSets;

    while (dataSets--) {
        int dataSetNumber, number;
        cin >> dataSetNumber >> number;

        int sumOfNaturalNumbers = number * (number + 1) / 2;
        int sumOfOddNumbers = number * number;
        int sumOfEvenNumbers = number * (number + 1);

        cout << dataSetNumber << " " << sumOfNaturalNumbers << " " << sumOfOddNumbers << " " << sumOfEvenNumbers << endl;
    }

    return 0;
}
