#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 1; i <= testCases; i++) {
        vector<pair<string, int>> websites(10);
        int maxRelevance = 0;

        for (int j = 0; j < 10; j++) {
            cin >> websites[j].first >> websites[j].second;
            maxRelevance = max(maxRelevance, websites[j].second);
        }

        cout << "Case #" << i << ":" << endl;
        for (int j = 0; j < 10; j++) {
            if (websites[j].second == maxRelevance) {
                cout << websites[j].first << endl;
            }
        }
    }
    
    return 0;
}