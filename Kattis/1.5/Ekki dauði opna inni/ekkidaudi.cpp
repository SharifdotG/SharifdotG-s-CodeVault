#include <bits/stdc++.h>

using namespace std;

int main() {
    string line1, line2;
    getline(cin, line1);
    getline(cin, line2);

    string word1 = line1.substr(0, line1.find('|'));
    string word2 = line2.substr(0, line2.find('|'));

    cout << word1 << word2 << " ";
    
    string word3 = line1.substr(line1.find('|') + 1, line1.size());
    string word4 = line2.substr(line2.find('|') + 1, line2.size());

    cout << word3 << word4 << endl;

    return 0;
}