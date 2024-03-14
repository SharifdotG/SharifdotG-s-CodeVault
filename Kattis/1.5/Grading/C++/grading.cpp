#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d, e, examScorePercentage; // a, b, c, d and e are grade limits
    cin >> a >> b >> c >> d >> e >> examScorePercentage;

    if (examScorePercentage >= a) cout << "A";
    else if (examScorePercentage >= b) cout << "B";
    else if (examScorePercentage >= c) cout << "C";
    else if (examScorePercentage >= d) cout << "D";
    else if (examScorePercentage >= e) cout << "E";
    else cout << "F";

    return 0;
}