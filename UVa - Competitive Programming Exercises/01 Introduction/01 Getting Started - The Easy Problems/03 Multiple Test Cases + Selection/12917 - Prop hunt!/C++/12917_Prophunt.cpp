#include <bits/stdc++.h>

using namespace std;

int main() {
    int props, hunters, objects;

    while (cin >> props >> hunters >> objects) {
        if (hunters > objects - props) {
            cout << "Hunters win!" << endl;
        } else {
            cout << "Props win!" << endl;
        }
    }
    
    return 0;
}