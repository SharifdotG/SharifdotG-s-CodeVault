#include <bits/stdc++.h>

using namespace std;

int main() {
    string sequence;
    cin >> sequence;

    int answer = 1, count = 1;

    for (int i = 1; i < sequence.size(); i++) {
        if (sequence[i] == sequence[i - 1]) {
            count++;
        } else {
            answer = max(answer, count);
            count = 1;
        }
    }

    answer = max(answer, count);

    cout << answer << endl;
    
    return 0;
}