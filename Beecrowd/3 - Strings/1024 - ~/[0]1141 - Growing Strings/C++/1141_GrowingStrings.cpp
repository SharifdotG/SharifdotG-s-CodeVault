#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n && n != 0) {
        vector<string> strings(n);
        for (int i = 0; i < n; ++i) {
            cin >> strings[i];
        }

        unordered_map<string, vector<string>> adjList;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i != j && strings[j].find(strings[i]) != string::npos) {
                    adjList[strings[i]].push_back(strings[j]);
                }
            }
        }

        unordered_map<string, int> inDegree;
        for (const auto &pair : adjList) {
            for (const auto &neighbor : pair.second) {
                inDegree[neighbor]++;
            }
        }

        queue<string> q;
        unordered_map<string, int> longestPath;

        for (const auto &str : strings) {
            if (inDegree[str] == 0) {
                q.push(str);
                longestPath[str] = 1;
            }
        }

        int maxLength = 0;

        while (!q.empty()) {
            string node = q.front();
            q.pop();

            for (const auto &neighbor : adjList[node]) {
                longestPath[neighbor] = max(longestPath[neighbor], longestPath[node] + 1);
                maxLength = max(maxLength, longestPath[neighbor]);

                if (--inDegree[neighbor] == 0) {
                    q.push(neighbor);
                }
            }
        }

        cout << maxLength << endl;
    }

    return 0;
}
