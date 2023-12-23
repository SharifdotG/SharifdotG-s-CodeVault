#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;

    while (cin >> s && s != "END") {
        int i = 1;
        
        while (s != "1") {
            s = to_string(s.size());
            i++;
        }

        cout << i << endl;
    }
    
    return 0;
}