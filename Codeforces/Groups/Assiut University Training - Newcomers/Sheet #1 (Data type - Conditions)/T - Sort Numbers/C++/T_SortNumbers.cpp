#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int og_a = a, og_b = b, og_c = c;

    if (a > b) {
        swap(a, b);
    }

    if (a > c) {
        swap(a, c);
    }

    if (b > c) {
        swap(b, c);
    }

    cout << a << endl << b << endl << c << endl;

    cout << endl;

    cout << og_a << endl << og_b << endl << og_c << endl;
    
    return 0;
}