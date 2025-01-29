#include <bits/stdc++.h>

using namespace std;

int main() {
    int trump, kim;
    cin >> trump >> kim;

    if (trump > kim) {
        cout << "MAGA!" << endl;
    } else if (trump < kim) {
        cout << "FAKE NEWS!" << endl;
    } else {
        cout << "WORLD WAR 3!" << endl;
    }

    return 0;
}