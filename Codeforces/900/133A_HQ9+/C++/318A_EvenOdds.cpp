#include <bits/stdc++.h>

using namespace std;

int main() {
    string program;
    cin >> program;

    bool willOutput = false;
    for (int i = 0; i < program.length(); i++) {
        if (program[i] == 'H' || program[i] == 'Q' || program[i] == '9') {
            willOutput = true;
            break;
        }
    }

    if (willOutput) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}