#include <bits/stdc++.h>

using namespace std;

int main() {
    int landscapeMeasures, count1 = 0, count2 = 0;
    cin >> landscapeMeasures;

    int height[landscapeMeasures];
    for (int i = 0; i < landscapeMeasures; i++) {
        cin >> height[i];
    }

    if (height[0] < height[1]) {
        for (int i = 0; i < landscapeMeasures - 1; i++) {
            if (i % 2 == 0) {
                if (height[i] < height[i + 1]) {
                    count1++;
                }
            } else {
                if (height[i] > height[i + 1]) {
                    count2++;
                }
            }
        }
    } else if (height[0] > height[1]) {
        for (int i = 0; i < landscapeMeasures - 1; i++) {
            if (i % 2 == 0) {
                if (height[i] > height[i + 1]) {
                    count1++;
                }
            } else {
                if (height[i] < height[i + 1]) {
                    count2++;
                }
            }
        }
    }

    if (count1 + count2 + 1 == landscapeMeasures) {
        cout << "1" << endl;
    } else cout << "0" << endl;

    return 0;
}