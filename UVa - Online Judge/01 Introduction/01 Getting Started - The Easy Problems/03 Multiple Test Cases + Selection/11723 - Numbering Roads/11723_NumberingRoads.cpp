#include <bits/stdc++.h>

using namespace std;

int main() {
    int roads, number, count = 1;

    while (cin >> roads >> number && roads != 0 && number != 0) {
        cout << "Case " << count++ << ": ";
        if (roads <= number) {
            cout << 0 << endl;
        } else {
            int answer = (roads - 1) / number;
            if (answer > 26) {
                cout << "impossible" << endl;
            } else {
                cout << answer << endl;
            }
        }
    }
    
    return 0;
}