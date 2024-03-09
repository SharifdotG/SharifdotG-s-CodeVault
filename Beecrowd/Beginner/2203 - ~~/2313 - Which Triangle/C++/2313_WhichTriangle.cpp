#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a < b + c && b < a + c && c < a + b) {
        cout << "Valido-";

        if (a == b && b == c) {
            cout << "Equilatero" << endl;
        } else if (a == b || b == c || a == c) {
            cout << "Isoceles" << endl;
        } else cout << "Escaleno" << endl;

        cout << "Retangulo: ";

        if (a * a == b * b + c * c ||
            b * b == a * a + c * c ||
            c * c == a * a + b * b) {
            cout << "S" << endl;
        } else cout << "N" << endl;
    } else cout << "Invalido" << endl;

    return 0;
}