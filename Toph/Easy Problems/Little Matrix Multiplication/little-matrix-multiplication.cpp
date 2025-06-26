#include <bits/stdc++.h>

using namespace std;

int main() {
    int a11, a12;
    cin >> a11 >> a12;
    int a21, a22;
    cin >> a21 >> a22;
    int b11, b12;
    cin >> b11 >> b12;
    int b21, b22;
    cin >> b21 >> b22;

    int c11 = a11 * b11 + a12 * b21;
    int c12 = a11 * b12 + a12 * b22;
    int c21 = a21 * b11 + a22 * b21;
    int c22 = a21 * b12 + a22 * b22;

    cout << c11 << " " << c12 << endl;
    cout << c21 << " " << c22 << endl;

    return 0;
}