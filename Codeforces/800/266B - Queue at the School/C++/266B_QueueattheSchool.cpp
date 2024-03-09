#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfChildren, time;
    cin >> numberOfChildren >> time;

    string queue;
    cin >> queue;

    while (time--) {
        for (int i = 0; i < numberOfChildren - 1; i++) {
            if (queue[i] == 'B' && queue[i + 1] == 'G') {
                swap(queue[i], queue[i + 1]);
                i++;
            }
        }
    }

    cout << queue;
    
    return 0;
}