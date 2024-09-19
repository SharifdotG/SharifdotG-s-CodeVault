#include <bits/stdc++.h>

using namespace std;

int main() {
    char alphabet;
    cin >> alphabet;

    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' ||
        alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U') {
        cout << "Jebb" << endl;
    } else if (alphabet == 'y' || alphabet == 'Y') cout << "Kannski" << endl;
    else cout << "Neibb" << endl;

    return 0;
}