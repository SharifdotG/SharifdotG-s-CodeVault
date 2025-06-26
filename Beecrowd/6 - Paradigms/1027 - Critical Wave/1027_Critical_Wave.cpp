#include <bits/stdc++.h>

using namespace std;

int main() {
    int numPoints;

    while (cin >> numPoints) {
        vector<pair<int, int>> points(numPoints);

        for (int i = 0; i < numPoints; i++) {
            cin >> points[i].first >> points[i].second;
        }

        sort(points.begin(), points.end());

        vector<int> topCounts(numPoints, 1);
        vector<int> bottomCounts(numPoints, 1);

        for (int i = 1; i < numPoints; i++) {
            int maxTopCount = 1, maxBottomCount = 1;

            for (int j = 0; j < i; j++) {
                if (points[i].first > points[j].first &&
                    points[i].second == points[j].second + 2) {
                    maxTopCount = max(maxTopCount, bottomCounts[j] + 1);
                }
                if (points[i].first > points[j].first &&
                    points[i].second == points[j].second - 2) {
                    maxBottomCount = max(maxBottomCount, topCounts[j] + 1);
                }
            }

            topCounts[i] = maxTopCount, bottomCounts[i] = maxBottomCount;
        }

        int maxPointsInCurve = 1;
        for (int i = 0; i < numPoints; i++) {
            maxPointsInCurve = max(maxPointsInCurve, topCounts[i]);
            maxPointsInCurve = max(maxPointsInCurve, bottomCounts[i]);
        }

        cout << maxPointsInCurve << endl;
    }

    return 0;
}
