#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int number;
        cin >> number;

        int gift[number];
        
        for (int i = 0; i < number; i++) cin >> gift[i];

        int minValue = *min_element(gift, gift + number);
        int maxValue = *max_element(gift, gift + number);

        cout << maxValue - minValue << endl;
    }

    return 0;
}