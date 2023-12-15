#include <bits/stdc++.h>

using namespace std;

int main() {
    string telephoneNumber;
    cin >> telephoneNumber;

    if (telephoneNumber[0] == '5' && telephoneNumber[1] == '5' && telephoneNumber[2] == '5') cout << "1" << endl;
    else cout << "0" << endl;

    return 0;
}