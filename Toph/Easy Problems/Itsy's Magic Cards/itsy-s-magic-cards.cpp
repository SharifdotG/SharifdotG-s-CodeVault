#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<char, char>> conflicts(m);
    for (int i = 0; i < m; ++i) {
        cin >> conflicts[i].first >> conflicts[i].second;
    }

    int max_cards = 0;
    for (int i = 0; i < (1 << n); ++i) {
        vector<char> current_set;
        for (int j = 0; j < n; ++j) {
            if ((i >> j) & 1) {
                current_set.push_back('A' + j);
            }
        }

        bool valid_set = true;
        for (int j = 0; j < current_set.size(); ++j) {
            for (int k = j + 1; k < current_set.size(); ++k) {
                for (const auto& conflict : conflicts) {
                    if ((current_set[j] == conflict.first && current_set[k] == conflict.second) ||
                        (current_set[j] == conflict.second && current_set[k] == conflict.first)) {
                        valid_set = false;
                        break;
                    }
                }
                if (!valid_set) {
                    break;
                }
            }
            if (!valid_set) {
                break;
            }
        }

        if (valid_set) {
            max_cards = max(max_cards, (int)current_set.size());
        }
    }

    cout << max_cards << endl;

    return 0;
}