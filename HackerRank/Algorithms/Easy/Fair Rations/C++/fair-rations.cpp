#include <bits/stdc++.h>

using namespace std;

int main() {
    int numLoaves;
    cin >> numLoaves;

    vector<int> loaves(numLoaves);
    for (int i = 0; i < numLoaves; i++) {
        cin >> loaves[i];
    }

    int numOdds = 0;
    for (int i = 0; i < numLoaves; i++) {
        if (loaves[i] % 2 != 0) {
            numOdds++;
        }
    }

    if (numOdds % 2 != 0) {
        cout << "NO" << endl;
    } else {
        int numLoavesToDistribute = 0;
        for (int i = 0; i < numLoaves; i++) {
            if (loaves[i] % 2 != 0) {
                loaves[i]++;
                loaves[i + 1]++;
                numLoavesToDistribute += 2;
            }
        }

        cout << numLoavesToDistribute << endl;
    }

    return 0;
}