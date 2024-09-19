#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> points;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        points.push_back({x, y});
    }

    double min_distance = DBL_MAX;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double distance = sqrt(
                pow(points[i].first - points[j].first, 2) +
                pow(points[i].second - points[j].second, 2)
            );

            min_distance = min(min_distance, distance);
        }
    }

    cout << fixed << setprecision(4) << min_distance << endl;
    
    return 0;
}