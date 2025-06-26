#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int first = 0, second = 1, next;

    for (int i = 2; i <= n; i++) {
        next = first + second;
        first = second;
        second = next;
    }

    cout << next << endl;
    
    return 0;
}