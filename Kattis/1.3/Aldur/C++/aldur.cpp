#include <bits/stdc++.h>

using namespace std;

int main() {
    int friends;
    cin >> friends;

    vector<int> ages(friends);
    for (int i = 0; i < friends; i++) {
        cin >> ages[i];
    }

    cout << *min_element(ages.begin(), ages.end()) << endl;

    return 0;
}