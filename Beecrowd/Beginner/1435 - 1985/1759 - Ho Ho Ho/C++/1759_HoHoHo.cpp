#include <bits/stdc++.h>

using namespace std;

int main() {
    int timesHoSpoken;
    cin >> timesHoSpoken;

    for (int i = 0; i < timesHoSpoken; i++) {
        if (i == timesHoSpoken - 1) {
            cout << "Ho!" << endl;
        } else cout << "Ho ";
    }

    return 0;
}