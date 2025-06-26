#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    for (int i = 1; i <= testCases; i++) {
        int cityNumber, roads;
        cin >> cityNumber >> roads;

        vector<pair<int, int>> graph[cityNumber + 1];
        vector<int> distance(cityNumber + 1, INT_MAX);
        vector<bool> visited(cityNumber + 1, false);

        for (int j = 0; j < roads; j++) {
            int u, v, w;
            cin >> u >> v >> w;

            graph[u].push_back({v, w});
            graph[v].push_back({u, w});
        }

        int source;
        cin >> source;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, source});
        distance[source] = 0;

        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();

            if (visited[u]) {
                continue;
            }

            visited[u] = true;

            for (auto &edge : graph[u]) {
                int v = edge.first;
                int w = edge.second;

                if (!visited[v] && distance[v] > max(w, distance[u])) {
                    distance[v] = max(w, distance[u]);
                    pq.push({distance[v], v});
                }
            }
        }

        cout << "Case " << i << ":" << endl;
        for (int j = 0; j < cityNumber; j++) {
            if (distance[j] == INT_MAX) {
                cout << "Impossible" << endl;
            } else {
                cout << distance[j] << endl;
            }
        }
    }

    return 0;
}