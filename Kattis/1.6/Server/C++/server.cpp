#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfTasks, totalLoadTime;
    cin >> numberOfTasks >> totalLoadTime;

    int tasks[numberOfTasks];
    for (int i = 0; i < numberOfTasks; i++) {
        cin >> tasks[i];
    }

    int totalTime = 0, completedTasks = 0;

    for (int i = 0; i < numberOfTasks; i++) {
        if (totalTime + tasks[i] <= totalLoadTime) {
            totalTime += tasks[i];
            completedTasks++;
        } else break;
    }

    cout << completedTasks << endl;

    return 0;
}
