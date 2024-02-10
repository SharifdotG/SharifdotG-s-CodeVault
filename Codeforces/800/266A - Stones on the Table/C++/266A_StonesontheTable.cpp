#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfStones;
    cin >> numberOfStones;

    string stones;
    cin >> stones;

    int count = 0;

    for (int i = 0; i < numberOfStones - 1; i++) {
        if (stones[i] == stones[i + 1]) count++;
    }

    cout << count;
    
    return 0;
}