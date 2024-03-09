#include <bits/stdc++.h>

using namespace std;

int main() {
    int tea, answer, correct = 0;
    cin >> tea;

    for (int i = 0; i < 5; i++) {
        cin >> answer;

        if (answer == tea) {
            correct++;
        }
    }

    cout << correct << endl;

    return 0;
}
