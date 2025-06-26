#include <bits/stdc++.h>

using namespace std;

int main() {
    int lines;
    cin >> lines;

    map<string, int> teams;

    for (int i = 0; i < lines; i++) {
        string team;
        cin >> team;

        teams[team]++;
    }

    string winner;
    int max = 0;

    for (auto team : teams) {
        if (team.second > max) {
            max = team.second;
            winner = team.first;
        }
    }

    cout << winner << endl;
    
    return 0;
}