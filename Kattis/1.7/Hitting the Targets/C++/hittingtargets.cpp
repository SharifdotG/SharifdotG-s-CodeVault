#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfTargets;
    cin >> numberOfTargets;

    vector<pair<pair<int, int>, int>> circles;
    vector<pair<pair<int, int>, pair<int, int>>> rectangles;

    for (int i = 0; i < numberOfTargets; i++) {
        string shape;
        cin >> shape;

        if (shape == "circle") {
            int x, y, r; // x and y are the coordinates of the center of the circle. r is the radius of the circle.
            cin >> x >> y >> r;

            circles.push_back(make_pair(make_pair(x, y), r));
        } else {
            int x1, y1, x2, y2; // (x1, y1) and (x2, y2) are the coordinates of the bottom left and top right corners of the rectangle, respectively.
            cin >> x1 >> y1 >> x2 >> y2;

            rectangles.push_back(make_pair(make_pair(x1, y1), make_pair(x2, y2)));
        }
    }

    int numberOfShots;
    cin >> numberOfShots;

    for (int i = 0; i < numberOfShots; i++) {
        int x, y; // (x, y) is the coordinates of the shot.
        cin >> x >> y;

        int numberOfTargetsHit = 0;

        for (int j = 0; j < circles.size(); j++) {
            int x1 = circles[j].first.first;
            int y1 = circles[j].first.second;
            int r = circles[j].second;

            if ((x - x1) * (x - x1) + (y - y1) * (y - y1) <= r * r) {
                numberOfTargetsHit++;
            }
        }

        for (int j = 0; j < rectangles.size(); j++) {
            int x1 = rectangles[j].first.first;
            int y1 = rectangles[j].first.second;
            int x2 = rectangles[j].second.first;
            int y2 = rectangles[j].second.second;

            if (x1 <= x && x <= x2 && y1 <= y && y <= y2) {
                numberOfTargetsHit++;
            }
        }

        cout << numberOfTargetsHit << endl;
    }

    return 0;
}
