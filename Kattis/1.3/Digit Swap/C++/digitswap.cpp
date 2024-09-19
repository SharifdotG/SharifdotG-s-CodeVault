#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;

    for (int i = number; i > 0; i /= 10) cout << i % 10;

    return 0;
}