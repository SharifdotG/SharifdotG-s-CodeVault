#include <bits/stdc++.h>

using namespace std;

int main() {
    int toktikkers;
    cin >> toktikkers;

    unordered_map<string, int> viewCount;

    while (toktikkers--) {
        string toktikker;
        int views;
        cin >> toktikker >> views;

        viewCount[toktikker] += views;
    }

    string mostPopularToktikker;
    int mostViews = 0;

    for (auto& [toktikker, views] : viewCount) {
        if (views > mostViews) {
            mostPopularToktikker = toktikker;
            mostViews = views;
        }
    }

    cout << mostPopularToktikker << endl;

    return 0;
}