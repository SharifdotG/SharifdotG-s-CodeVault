#include <bits/stdc++.h>

using namespace std;

int main() {
    int numbers;
    cin >> numbers;

    long long sum = 0;

    for (int i = 0; i < numbers; i++) {
        long long number;
        cin >> number;

        sum += number;
    }

    cout << sum << endl;
    
    return 0;
}