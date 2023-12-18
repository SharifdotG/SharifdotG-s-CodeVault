#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, numbers, sum = 0;
    cin >> a >> numbers;

    while (numbers <= 0) cin >> numbers;

    for (int i = 0; i < numbers; i++) sum += a + i;

    cout << sum << endl;
    
    return 0;
}