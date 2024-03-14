#include <bits/stdc++.h>

using namespace std;

int main() {
    int numbers, modulo[42] = {0}, count = 0;

    for (int i = 0; i < 10; i++) {
        cin >> numbers;
        modulo[numbers % 42]++;
    }

    for (int i = 0; i < 42; i++) {
        if (modulo[i] > 0) count++;
    }

    cout << count << endl;

    return 0;
}