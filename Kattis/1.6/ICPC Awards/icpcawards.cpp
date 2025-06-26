#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfTeams;
    cin >> numberOfTeams;

    map<string, bool> universities;

    for (int i = 0; i < numberOfTeams; i++) {
        string university, team;
        cin >> university >> team;

        if (universities.size() < 12 && !universities[university]) {
            cout << university << " " << team << endl;
            universities[university] = true;
        }
    }

    return 0;
}
