#include <bits/stdc++.h>

using namespace std;

struct Friend {
    string name;
    int like;
};

int main() {
    int friends;
    cin >> friends;

    map<string, Friend> birthdayMap;

    for (int i = 0; i < friends; ++i) {
        string name, birthday;
        int like;
        cin >> name >> like >> birthday;

        if (birthdayMap.find(birthday) != birthdayMap.end()) {
            if (like > birthdayMap[birthday].like) {
                birthdayMap[birthday] = { name, like };
            }
        } else {
            birthdayMap[birthday] = { name, like };
        }
    }

    vector<string> sortedNames;
    
    for (const auto& entry : birthdayMap) {
        sortedNames.push_back(entry.second.name);
    }

    sort(sortedNames.begin(), sortedNames.end());

    cout << sortedNames.size() << endl;
    for (const auto& name : sortedNames) {
        cout << name << endl;
    }

    return 0;
}