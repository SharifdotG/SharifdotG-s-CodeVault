#include <bits/stdc++.h>

using namespace std;

int main() {
    string hissingWord;
    cin >> hissingWord;

    bool isHissing = false;

    for (int i = 0; i < hissingWord.size() - 1; i++) {
        if (hissingWord[i] == 's' && hissingWord[i + 1] == 's') {
            isHissing = true;
            break;
        }
    }

    if (isHissing) cout << "hiss" << endl;
    else cout << "no hiss" << endl;

    return 0;
}