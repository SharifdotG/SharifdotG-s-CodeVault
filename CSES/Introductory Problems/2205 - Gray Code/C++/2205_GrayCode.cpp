#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < (1 << n); i++) {
        int gray = i ^ (i >> 1);

        bitset<32> bits(gray);
        string grayCode = bits.to_string();
        
        cout << grayCode.substr(32 - n) << endl;
    }
    
    return 0;
}