#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfPeople;
    cin >> numberOfPeople;

    int opinion;
    bool isEasy = true;

    while (numberOfPeople--) {
        cin >> opinion;
        if (opinion == 1) {
            isEasy = false;
        }
    }

    if (isEasy) {
        cout << "EASY";
    } else {
        cout << "HARD";
    }
    
    return 0;
}