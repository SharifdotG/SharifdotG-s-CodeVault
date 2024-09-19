#include <bits/stdc++.h>

using namespace std;

int main() {
    int contests, min, max, amazing = 0;
    cin >> contests >> min;

    max = min;

    while (--contests) {
        int score;
        cin >> score;

        if (score < min) {
            min = score;
            amazing++;
        } else if (score > max) {
            max = score;
            amazing++;
        }
    }

    cout << amazing << endl;

    return 0;
}