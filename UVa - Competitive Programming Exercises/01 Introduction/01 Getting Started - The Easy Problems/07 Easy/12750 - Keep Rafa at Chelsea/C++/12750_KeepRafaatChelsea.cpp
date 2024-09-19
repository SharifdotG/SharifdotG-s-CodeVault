#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 1; i <= testCases; i++) {
        int games;
        cin >> games;
        
        char gameResult[games];

        int count = 0, keepJob = 0;

        for (int j = 0; j < games; j++) {
            cin >> gameResult[j];
        }

        for (keepJob = 0; keepJob < games; keepJob++) {
            if (gameResult[keepJob] == 'W') {
                count = 0;
            } else count++;

            if (count == 3) break;
        }
        
        if (count == 3) {
            cout << "Case " << i << ": " << keepJob + 1 << endl;
        } else {
            cout << "Case " << i << ": Yay! Mighty Rafa persists!" << endl;
        }
    }
    
    return 0;
}