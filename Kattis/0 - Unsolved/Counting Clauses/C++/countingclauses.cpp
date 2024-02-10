#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> clauses(m, vector<int>(3));
    unordered_set<int> variables;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> clauses[i][j];
            variables.insert(abs(clauses[i][j]));
        }
    }

    if (m >= 8 && variables.size() == n) {
        cout << "satisfactory" << endl;
    } else {
        cout << "unsatisfactory" << endl;
    }

    return 0;
}
