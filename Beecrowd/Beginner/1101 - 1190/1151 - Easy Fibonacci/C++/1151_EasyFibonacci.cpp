#include <bits/stdc++.h>

using namespace std;

int main() {
    int number, first = 0, second = 1, next;
    cin >> number;

    for (int i = 1; i <= number; i++) {
        if (i == number) cout << first << endl;
        else cout << first << " ";

        next = first + second;
        first = second;
        second = next;
    }
    
    return 0;
}