#include <bits/stdc++.h>

using namespace std;

int main() {
    int meowthRead, youRead, youTime, meowthTime, timeReadTogether = 0;
    cin >> meowthRead >> youRead >> youTime >> meowthTime;

    cout << youRead * youTime + meowthTime * (youRead / (meowthRead - 1)) << endl;

    return 0;
}
