#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, B, c;
    cin >> a >> B >> c;

    double average = (a * 2 + B * 3 + c * 5) / 10;

    cout << fixed << setprecision(1) << "MEDIA = " << average << endl;
    
    return 0;
}