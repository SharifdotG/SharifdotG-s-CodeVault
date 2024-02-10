#include <bits/stdc++.h>

using namespace std;

int main() {
    int classrooms, santizersAvailable, totalSanitizers = 0;
    cin >> classrooms >> santizersAvailable;

    for (int i = 0; i < classrooms; i++) {
        int sanitizers;
        cin >> sanitizers;

        totalSanitizers += sanitizers;
    }

    if (totalSanitizers <= santizersAvailable) cout << "Jebb" << endl;
    else cout << "Neibb" << endl;

    return 0;
}