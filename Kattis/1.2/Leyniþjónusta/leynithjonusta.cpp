#include <bits/stdc++.h>

using namespace std;

int main() {
    string email, fixedEmail;
    getline(cin, email);

    for (int i = 0; i < email.size(); i++) {
        if (email[i] != ' ') {
            fixedEmail += email[i];
        }
    }

    cout << fixedEmail << endl;

    return 0;
}