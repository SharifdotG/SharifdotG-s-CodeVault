#include <bits/stdc++.h>

using namespace std;

int main() {
    int specialtySteaks, steaksInOnePan;
    cin >> specialtySteaks >> steaksInOnePan;

    if (specialtySteaks <= steaksInOnePan) cout << 2 << endl;
    else if (specialtySteaks * 2 % steaksInOnePan == 0) cout << specialtySteaks * 2 / steaksInOnePan << endl;
    else cout << specialtySteaks * 2 / steaksInOnePan + 1 << endl;
    
    return 0;
}