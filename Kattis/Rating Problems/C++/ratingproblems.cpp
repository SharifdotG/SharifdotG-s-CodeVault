#include <bits/stdc++.h>

using namespace std;

int main() {
    int totalJudges, judgesWhoRated;
    cin >> totalJudges >> judgesWhoRated;

    float lowestScore = 0;
    float highestScore = 0;

    for (int i = 0; i < judgesWhoRated; i++) {
        float score;
        cin >> score;

        lowestScore += score;
        highestScore += score;
    }

    lowestScore += (totalJudges - judgesWhoRated) * -3;
    highestScore += (totalJudges - judgesWhoRated) * 3;

    cout << fixed << setprecision(4) << lowestScore / totalJudges << " " << highestScore / totalJudges << endl;

    return 0;
}