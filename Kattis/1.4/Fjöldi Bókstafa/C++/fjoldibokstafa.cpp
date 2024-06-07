#include <bits/stdc++.h>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    int count = 0;
    for (char ch : input) {
        if (isalpha(ch)) {
            count++;
        }
    }

    cout << count << endl;
    
    return 0;
}
