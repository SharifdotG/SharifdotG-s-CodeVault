#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        int peoples, steps;
        cin >> peoples >> steps;

        vector<int> people(peoples);
        for (int j = 0; j < peoples; j++) {
            people[j] = j + 1;
        }

        int idx = 0;
        while (people.size() > 1) {
            idx = (idx + steps - 1) % people.size();
            people.erase(people.begin() + idx);
        }

        cout << "Case " << i + 1 << ": " << people[0] << endl;
    }
    
    return 0;
}