#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string sentence;
        getline(cin, sentence);

        bool firstChar = true;

        for (size_t j = 0; j < sentence.size(); ++j) {
            if (firstChar) {
                sentence[j] = toupper(sentence[j]);
                firstChar = false;
            } else {
                sentence[j] = tolower(sentence[j]);
            }
        }

        cout << sentence << endl;
    }

    return 0;
}
