#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;

    cout << fixed << setprecision(1) << (pow(((1 + sqrt(5)) / 2), number) - pow(((1 - sqrt(5)) / 2), number)) / sqrt(5) << endl;

    return 0;
}