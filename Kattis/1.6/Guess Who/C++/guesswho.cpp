#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfCharacters, attributes, numberOfQuestions;
    cin >> numberOfCharacters >> attributes >> numberOfQuestions;

    vector<string> characters(numberOfCharacters);
    for (int i = 0; i < numberOfCharacters; i++) {
        cin >> characters[i];
    }

    map<int, char> questions;
    for (int i = 0; i < numberOfQuestions; i++) {
        int attribute;
        char response;
        cin >> attribute >> response;
        questions[attribute] = response;
    }

    set<int> possibleCharacters;

    for (int i = 0; i < numberOfCharacters; i++) {
        bool consistent = true;

        for (auto j = questions.begin(); j != questions.end(); ++j) {
            int attribute = j->first;
            char response = j->second;

            if (characters[i][attribute - 1] != response) {
                consistent = false;
                break;
            }
        }

        if (consistent) {
            possibleCharacters.insert(i + 1);
        }
    }

    if (possibleCharacters.size() == 1) {
        cout << "unique" << endl;
        cout << *possibleCharacters.begin() << endl;
    } else {
        cout << "ambiguous" << endl;
        cout << possibleCharacters.size() << endl;
    }

    return 0;
}
