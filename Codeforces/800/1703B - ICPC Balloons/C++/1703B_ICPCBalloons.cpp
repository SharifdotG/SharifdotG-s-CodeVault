#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int stringLength;
        cin >> stringLength;

        string solvedProblemsOrder;
        cin >> solvedProblemsOrder;

        int balloons = stringLength + set<char> (solvedProblemsOrder.begin(), solvedProblemsOrder.end()).size();

        cout << balloons << endl;
    }

    return 0;
}