#include <bits/stdc++.h>

using namespace std;

int main() {
    int houses, tasks;
    cin >> houses >> tasks;

    long long time = 0;
    int previous = 1;

    for (int i = 0; i < tasks; i++) {
        int task;
        cin >> task;

        if (task >= previous) time += task - previous;
        else time += houses - previous + task;

        previous = task;
    }

    cout << time << endl;
    
    return 0;
}