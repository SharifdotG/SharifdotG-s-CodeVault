#include <bits/stdc++.h>

using namespace std;

int main() {
    int children, chocolates;
    cin >> children >> chocolates;

    cout << children - (chocolates % children) << endl;
    
    return 0;
}