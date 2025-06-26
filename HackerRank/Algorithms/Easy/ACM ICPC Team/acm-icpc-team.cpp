#include <bits/stdc++.h>

using namespace std;

int main() {
    int attendees, topics;
    cin >> attendees >> topics;

    vector<string> topic(attendees);
    for (int i = 0; i < attendees; i++) {
        cin >> topic[i];
    }

    int maxTopics = 0, maxTeams = 0;
    for (int i = 0; i < attendees - 1; i++) {
        for (int j = i + 1; j < attendees; j++) {
            int topicsKnown = 0;
            for (int k = 0; k < topics; k++) {
                if (topic[i][k] == '1' || topic[j][k] == '1') {
                    topicsKnown++;
                }
            }

            if (topicsKnown > maxTopics) {
                maxTopics = topicsKnown;
                maxTeams = 1;
            } else if (topicsKnown == maxTopics) {
                maxTeams++;
            }
        }
    }

    cout << maxTopics << endl;
    cout << maxTeams << endl;

    return 0;
}