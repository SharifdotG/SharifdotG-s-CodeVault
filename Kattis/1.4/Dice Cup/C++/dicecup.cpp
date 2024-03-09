#include <bits/stdc++.h>

using namespace std;

int main() {
    int firstDiceFace, secondDiceFace;
    cin >> firstDiceFace >> secondDiceFace;

    int sum = firstDiceFace + secondDiceFace;

    if (firstDiceFace > secondDiceFace) {
        for (int i = secondDiceFace + 1; i <= firstDiceFace + 1; i++) {
            cout << i << endl;
        }
    } else if (secondDiceFace > firstDiceFace) {
        for (int i = firstDiceFace + 1; i <= secondDiceFace + 1; i++) {
            cout << i << endl;
        }
    } else cout << firstDiceFace + 1 << endl;

    return 0;
}