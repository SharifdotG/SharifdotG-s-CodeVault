#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    double average = (a * 3.5 + b * 7.5) / 11;

    cout << fixed << setprecision(5) << "MEDIA = " << average << endl;
    
    return 0;
}