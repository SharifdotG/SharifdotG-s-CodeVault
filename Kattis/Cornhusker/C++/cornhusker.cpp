#include <bits/stdc++.h>

using namespace std;

int main() {
    int circumference, length, totalKernels = 0;

    for (int i = 0; i < 5; i++) {
        cin >> circumference >> length;
        totalKernels += circumference * length;
    }

    int earsCount, KWF;
    cin >> earsCount >> KWF;

    cout << ((totalKernels / 5) * earsCount) / KWF << endl;

    return 0;
}