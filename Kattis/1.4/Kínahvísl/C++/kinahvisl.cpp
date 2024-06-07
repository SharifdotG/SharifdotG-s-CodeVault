#include <bits/stdc++.h>

using namespace std;

int main() {
    string initialWord, finalWord;
    cin >> initialWord >> finalWord;

    int count = 1;
    for (int i = 0; i < initialWord.length(); i++) {
        if (initialWord[i] != finalWord[i]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}