#include <bits/stdc++.h>

using namespace std;

int main() {
    int start, end, appleTree, orangeTree, apples, oranges, applesLand = 0, orangesLand = 0;
    cin >> start >> end >> appleTree >> orangeTree >> apples >> oranges;

    int apple[apples], orange[oranges];

    for (int i = 0; i < apples; i++) {
        cin >> apple[i];

        if (appleTree + apple[i] >= start && appleTree + apple[i] <= end) {
            applesLand++;
        }
    }

    for (int i = 0; i < oranges; i++) {
        cin >> orange[i];

        if (orangeTree + orange[i] >= start && orangeTree + orange[i] <= end) {
            orangesLand++;
        }
    }

    cout << applesLand << endl;
    cout << orangesLand << endl;
    
    return 0;
}