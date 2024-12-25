#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfLines, queries;
    cin >> numberOfLines >> queries;

    vector<pair<int, int>> lines(numberOfLines);
    for (int i = 0; i < numberOfLines; ++i) {
        cin >> lines[i].first >> lines[i].second;

        if (lines[i].first > lines[i].second) {
            swap(lines[i].first, lines[i].second);
        }
    }

    vector<int> results(queries);
    for (int i = 0; i < queries; ++i) {
        int queryStart, queryEnd;
        cin >> queryStart >> queryEnd;

        if (queryStart > queryEnd) {
            swap(queryStart, queryEnd);
        }

        int count = 0;
        for (const auto& line : lines) {
            if (!(line.second < queryStart || line.first > queryEnd)) {
                count++;
            }
        }

        results[i] = count;
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}