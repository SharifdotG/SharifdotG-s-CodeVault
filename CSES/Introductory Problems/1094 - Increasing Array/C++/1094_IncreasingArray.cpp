#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long answer = 0, previous, current;
    cin >> previous;

    for (int i = 1; i < n; i++) {
        cin >> current;

        if (current < previous) {
            answer += previous - current;
        } else previous = current;
    }

    cout << answer << endl;
    
    return 0;
}