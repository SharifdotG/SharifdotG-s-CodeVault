#include <bits/stdc++.h>

using namespace std;

int main() {
    string word;
    cin >> word;

    size_t found = word.find('a');
    if (found != string::npos) cout << word.substr(found) << endl;

    return 0;
}