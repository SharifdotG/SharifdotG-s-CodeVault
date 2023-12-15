#include <bits/stdc++.h>

using namespace std;

int main() {
    string message;
    getline(cin, message);

    bool isSmile = message.find(":)") != string::npos;
    bool isSad = message.find(":(") != string::npos;

    if (isSmile && !isSad) cout << "alive" << endl;
    else if (isSad && !isSmile) cout << "undead" << endl;
    else if (isSad && isSmile) cout << "double agent" << endl;
    else cout << "machine" << endl;

    return 0;
}