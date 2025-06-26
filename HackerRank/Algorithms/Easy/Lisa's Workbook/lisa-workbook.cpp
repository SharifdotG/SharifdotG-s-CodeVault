#include <bits/stdc++.h>

using namespace std;

int main() {
    int numChapters, maxProblemsPerPage;
    cin >> numChapters >> maxProblemsPerPage;

    vector<int> problems(numChapters);
    for (int i = 0; i < numChapters; i++) {
        cin >> problems[i];
    }

    int specialProblems = 0, currentPage = 1;
    for (int i = 0; i < numChapters; i++) {
        for (int j = 1; j <= problems[i]; j++) {
            if (j == currentPage) {
                specialProblems++;
            }

            if (j == problems[i] || j % maxProblemsPerPage == 0) {
                currentPage++;
            }
        }
    }

    cout << specialProblems << endl;

    return 0;
}