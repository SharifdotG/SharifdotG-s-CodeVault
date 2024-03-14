#include <bits/stdc++.h>

using namespace std;

int main() {
    int oranges, maxSize, wasteSize;
    cin >> oranges >> maxSize >> wasteSize;

    int waste = 0, count = 0;

    for (int i = 0; i < oranges; i++) {
        int orange;
        cin >> orange;

        if (orange <= maxSize) {
            waste += orange;
        }

        if (waste > wasteSize) {
            waste = 0;
            count++;
        }
    }

    cout << count << endl;
    
    return 0;
}