#include <bits/stdc++.h>

using namespace std;

int main() {
    int start, first, second, third;

    while (cin >> start >> first >> second >> third) {
        if (start == 0 && first == 0 && second == 0 && third == 0) {
            break;
        }

        int ans = 1080;
        ans += (start - first + 40) % 40 * 9;
        ans += (second - first + 40) % 40 * 9;
        ans += (second - third + 40) % 40 * 9;

        cout << ans << endl;
    }
}