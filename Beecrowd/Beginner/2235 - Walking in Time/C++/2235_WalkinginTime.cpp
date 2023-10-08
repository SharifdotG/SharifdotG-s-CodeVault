#include <bits/stdc++.h>

using namespace std;

int main() {
    int credit1, credit2, credit3;
    cin >> credit1 >> credit2 >> credit3;

    if (credit1 == credit2 || credit1 == credit3 || credit2 == credit3 || credit1 + credit2 == credit3 || credit1 + credit3 == credit2 || credit2 + credit3 == credit1) cout << "S" << endl;
    else cout << "N" << endl;

    return 0;
}