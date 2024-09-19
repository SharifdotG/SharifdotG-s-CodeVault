#include <bits/stdc++.h>

using namespace std;

int main() {
    string DNA;
    cin >> DNA;

    if (DNA.find("COV") != string::npos) cout << "Veikur!" << endl;
    else cout << "Ekki veikur!" << endl;

    return 0;
}