#include <bits/stdc++.h>

using namespace std;

int main() {
    char d;
    string n;
    while (cin >> d >> n && (d != '0' || n != "0")) {
        n.erase(remove(n.begin(), n.end(), d), n.end());
        n.erase(0, min(n.find_first_not_of('0'), n.size() - 1));
        
        if (n.empty()) {
            cout << 0 << endl;
        } else {
            cout << n << endl;
        }
    }

    return 0;
}