#include <bits/stdc++.h>

using namespace std;

int main() {
    string number;
    cin >> number;

    int count = 0;
    
    for (int i = 0; i < number.length(); i++) {
        if (number[i] == '4' || number[i] == '7') {
            count++;
        }
    }

    if (count == 4 || count == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}