#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, numbers;
    cin >> a >> numbers;

    while (numbers <= 0) {
        cin >> numbers;
    }

    int sum = 0;

    for (int i = 0; i < numbers; i++) {
        sum += a + i;
    }

    cout << sum << endl;
    
    return 0;
}