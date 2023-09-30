#include <bits/stdc++.h>

using namespace std;

int main() {
    int amount;
    cin >> amount;

    cout << amount << endl;

    int notes[] = {100, 50, 20, 10, 5, 2, 1};
    for (int i = 0; i < 7; i++) {
        int noteAmount = amount / notes[i];
        cout << noteAmount << " nota(s) de R$ " << notes[i] << ",00" << endl;
        amount -= noteAmount * notes[i];
    }
    
    return 0;
}