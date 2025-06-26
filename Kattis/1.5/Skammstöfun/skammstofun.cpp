#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfWords;
    cin >> numberOfWords;

    string abbreviation = "";

    for (int i = 0; i < numberOfWords; i++) {
        string sentence;
        cin >> sentence;

        if (isupper(sentence[0])) {
            abbreviation += sentence[0];
        }
    }

    cout << abbreviation << endl;

    return 0;
}