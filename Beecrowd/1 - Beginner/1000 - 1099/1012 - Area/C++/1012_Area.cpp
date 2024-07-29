#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double triangle = (a * c) / 2;
    double circle = 3.14159 * c * c;
    double trapezium = ((a + b) * c) / 2;
    double square = b * b;
    double rectangle = a * b;

    cout << fixed << setprecision(3) << "TRIANGULO: " << triangle << endl;
    cout << fixed << setprecision(3) << "CIRCULO: " << circle << endl;
    cout << fixed << setprecision(3) << "TRAPEZIO: " << trapezium << endl;
    cout << fixed << setprecision(3) << "QUADRADO: " << square << endl;
    cout << fixed << setprecision(3) << "RETANGULO: " << rectangle << endl;
    
    return 0;
}