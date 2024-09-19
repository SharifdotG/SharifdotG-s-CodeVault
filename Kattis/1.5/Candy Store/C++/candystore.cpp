#include <bits/stdc++.h>

using namespace std;

int main() {
    int customers, q;
    cin >> customers >> q;
    cin.ignore();

    unordered_map<string, vector<string>> initialsMap;
    
    for (int i = 0; i < customers; ++i) {
        string firstName, lastName;
        cin >> firstName >> lastName;

        string initials = string(1, firstName[0]) + string(1, lastName[0]);
        string fullName = firstName + " " + lastName;

        initialsMap[initials].push_back(fullName);
    }

    for (int i = 0; i < q; i++) {
        string query;
        cin >> query;

        if (initialsMap.find(query) == initialsMap.end()) {
            cout << "nobody" << endl;
        } else {
            vector<string>& names = initialsMap[query];

            if (names.size() == 1) {
                cout << names[0] << endl;
            } else {
                cout << "ambiguous" << endl;
            }
        }
    }

    return 0;
}
