#include <bits/stdc++.h>

using namespace std;

int main() {
    string message;
    cin >> message;

    string hello = "hello";
    int index = 0;

    for (int i = 0; i < message.size(); i++) {
        if (message[i] == hello[index]) {
            index++;
        }
    }

    if (index == 5) {
        cout << "YES" << endl;
    } else cout << "NO" << endl;
    
    return 0;
}