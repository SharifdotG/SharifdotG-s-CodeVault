#include <bits/stdc++.h>

using namespace std;

int main() {
    int students, times;
    cin >> students >> times;

    int count = 0;

    for (int i = 0; i < students; i++) {
        int number;
        cin >> number;

        if (number + times <= 5) {
            count++;
        }
    }

    cout << count / 3 << endl;

    return 0;
}