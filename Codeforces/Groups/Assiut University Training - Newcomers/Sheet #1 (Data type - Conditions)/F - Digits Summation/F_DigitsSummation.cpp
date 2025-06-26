#include <bits/stdc++.h>

using namespace std;

int main() {
    string n, m;
    cin >> n >> m;

    int a = n[n.size() - 1] - '0';
    int b = m[m.size() - 1] - '0';

    cout << a + b << endl;
    
    return 0;
}