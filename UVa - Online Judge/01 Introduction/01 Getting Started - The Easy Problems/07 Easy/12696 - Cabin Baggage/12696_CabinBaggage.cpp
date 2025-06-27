#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    int count = 0;

    while (testCases--) {
        double length, width, depth, weight;
        cin >> length >> width >> depth >> weight;

        if (((length <= 56 && width <= 45 && depth <= 25) ||
            (length + width + depth <= 125)) && weight <= 7) {
            cout << 1 << endl;
            count++;
        } else cout << 0 << endl;
    }

    cout << count << endl;
    
    return 0;
}