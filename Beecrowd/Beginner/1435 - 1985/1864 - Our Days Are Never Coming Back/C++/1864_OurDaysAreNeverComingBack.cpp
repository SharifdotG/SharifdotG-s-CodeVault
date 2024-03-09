#include <bits/stdc++.h>

using namespace std;

int main() {
    string phrase = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int numberOfCharacters;
    cin >> numberOfCharacters;

    for (int i = 0; i < numberOfCharacters; i++) {
        cout << phrase[i];
    }

    cout << endl;

    return 0;
}