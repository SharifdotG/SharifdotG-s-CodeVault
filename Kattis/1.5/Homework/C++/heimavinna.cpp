#include <bits/stdc++.h>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    istringstream iss(input);
    unordered_set<int> problems;
    string segment;

    while (getline(iss, segment, ';')) {
        if (segment.find('-') != string::npos) {
            int start = stoi(segment.substr(0, segment.find('-')));
            int end = stoi(segment.substr(segment.find('-') + 1));

            for (int i = start; i <= end; i++) {
                problems.insert(i);
            }
        } else problems.insert(stoi(segment));
    }

    cout << problems.size() << endl;

    return 0;
}
