#include <bits/stdc++.h>

using namespace std;

int main() {
    string reversedText;
    cin >> reversedText;

    reverse(reversedText.begin(), reversedText.end());

    cout << reversedText << endl;

    return 0;
}