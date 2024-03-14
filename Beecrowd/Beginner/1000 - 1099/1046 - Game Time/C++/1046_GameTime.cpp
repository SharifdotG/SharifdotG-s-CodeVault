#include <bits/stdc++.h>

using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    if (start >= end) cout << "O JOGO DUROU " << 24 - start + end << " HORA(S)" << endl;
    else cout << "O JOGO DUROU " << end - start << " HORA(S)" << endl;
    
    return 0;
}