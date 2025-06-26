#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfPeople;
    cin >> numberOfPeople;

    vector<string> line;
    for (int i = 0; i < numberOfPeople; i++) {
        string name;
        cin >> name;

        line.push_back(name);
    }

    int peopleEnteredLine;
    cin >> peopleEnteredLine;

    for (int i = 0; i < peopleEnteredLine; i++) {
        string event, arguement1, arguement2;
        cin >> event >> arguement1;

        if (event == "cut") {
            cin >> arguement2;

            auto position = find(line.begin(), line.end(), arguement2);
            if (position != line.end()) {
                line.insert(position, arguement1);
            }
        } else {
            auto position = find(line.begin(), line.end(), arguement1);
            if (position != line.end()) {
                line.erase(position);
            }
        }
    }

    for (auto person : line) {
        cout << person << endl;
    }

    return 0;
}
