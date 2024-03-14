#include <bits/stdc++.h>

using namespace std;

int main() {
    string firstPassword, secondPassword;
    cin >> firstPassword >> secondPassword;

    int countDistinctSequences = 1;

    for (int i = 0; i < 4; i++) {
        if (firstPassword[i] == secondPassword[i]) {
            countDistinctSequences *= 1;
        } else countDistinctSequences *= 2;
    }

    cout << countDistinctSequences << endl;

    return 0;
}
