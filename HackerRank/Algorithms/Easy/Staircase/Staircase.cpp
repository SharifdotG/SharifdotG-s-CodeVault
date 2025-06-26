#include <bits/stdc++.h>

using namespace std;

int main() {
    int staircaseSize;
    cin >> staircaseSize;

    for (int i = 1; i <= staircaseSize; i++) {
        string spaces = string(staircaseSize - i, ' ');
        string hashes = string(i, '#');
        
        cout << spaces << hashes << endl;
    }
    
    return 0;
}