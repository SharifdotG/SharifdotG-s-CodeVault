#include <bits/stdc++.h>

using namespace std;

int main() {
    int precincts, districts;
    cin >> precincts >> districts;

    int totalVotesA[1001] = {0}, totalVotesB[1001] = {0};
    int wastedVotesA[1001] = {0}, wastedVotesB[1001] = {0};

    for (int i = 0; i < precincts; i++) {
        int district, votesA, votesB;
        cin >> district >> votesA >> votesB;

        totalVotesA[district] += votesA;
        totalVotesB[district] += votesB;
    }

    int totalVotes = 0, totalWastedVotesA = 0, totalWastedVotesB = 0;

    for (int district = 1; district <= districts; district++) {
        int totalVotesDistrict = totalVotesA[district] + totalVotesB[district];
        totalVotes += totalVotesDistrict;

        int halfVotes = totalVotesDistrict / 2 + 1;

        if (totalVotesA[district] > totalVotesB[district]) { // A party wins
            int wastedA = totalVotesA[district] - halfVotes;
            int wastedB = totalVotesB[district];

            cout << "A " << wastedA << " " << wastedB << endl;

            wastedVotesA[district] = wastedA;
            wastedVotesB[district] = wastedB;
        } else { // B party wins
            int wastedA = totalVotesA[district];
            int wastedB = totalVotesB[district] - halfVotes;

            cout << "B " << wastedA << " " << wastedB << endl;

            wastedVotesA[district] = wastedA;
            wastedVotesB[district] = wastedB;
        }

        totalWastedVotesA += wastedVotesA[district];
        totalWastedVotesB += wastedVotesB[district];
    }

    double efficiencyGap = abs(totalWastedVotesA - totalWastedVotesB) / (double) totalVotes;
    cout << fixed << setprecision(6) << efficiencyGap << endl;

    return 0;
}
