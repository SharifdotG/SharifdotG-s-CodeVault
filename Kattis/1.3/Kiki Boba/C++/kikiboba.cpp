#include <bits/stdc++.h>

using namespace std;

int main() {
    string word;
    cin >> word;

    int bobaCount = 0, kikiCount = 0;

    for (int i = 0; i < word.length(); i++) {
        if (word[i] == 'b') bobaCount++;
        if (word[i] == 'k') kikiCount++;
    }

    if (bobaCount > kikiCount) cout << "boba" << endl;
    else if (kikiCount > bobaCount) cout << "kiki" << endl;
    else if (kikiCount == 0 || bobaCount == 0) cout << "none" << endl;
    else if (kikiCount == bobaCount) cout << "boki" << endl;

    return 0;
}