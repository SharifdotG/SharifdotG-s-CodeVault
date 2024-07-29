#include <bits/stdc++.h>

using namespace std;

int main() {
    int value1, value2;

    while (true) {
        cin >> value1 >> value2;

        if (value1 == value2) break;

        if (value1 > value2) {
            cout << "Decrescente" << endl;
        } else cout << "Crescente" << endl;
    }
    
    return 0;
}