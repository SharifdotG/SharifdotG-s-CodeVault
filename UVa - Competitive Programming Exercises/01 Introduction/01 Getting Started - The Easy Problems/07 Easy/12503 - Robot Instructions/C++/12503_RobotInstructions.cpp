#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int instructions, position = 0;
        string instruction;
        cin >> instructions;

        vector<int> positions;

        while (instructions--) {
            cin >> instruction;

            if (instruction == "LEFT") {
                position--;
                positions.push_back(-1);
            } else if (instruction == "RIGHT") {
                position++;
                positions.push_back(1);
            } else {
                int index;
                cin >> instruction >> index;
                position += positions[index - 1];
                positions.push_back(positions[index - 1]);
            }
        }

        cout << position << endl;
    }
    
    return 0;
}