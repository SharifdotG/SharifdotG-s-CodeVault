#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;

    for (int i = 0; i < number; i++) {
        double a, b, c;
        cin >> a >> b >> c;

        double average = (a * 2 + b * 3 + c * 5) / 10;

        cout << fixed << setprecision(1) << average << endl;
    }
    
    return 0;
}