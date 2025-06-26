#include <bits/stdc++.h>

using namespace std;

int main() {
    string sA, sB, sC;
    cin >> sA >> sB >> sC;
    
    int turn = 0;
    while (true) {
        if (turn == 0) {
            if (sA.empty()) {
                cout << "A" << endl;
                break;
            }
            turn = sA[0] - 'a';
            sA.erase(0, 1);
        } else if (turn == 1) {
            if (sB.empty()) {
                cout << "B" << endl;
                break;
            }
            turn = sB[0] - 'a';
            sB.erase(0, 1);
        } else {
            if (sC.empty()) {
                cout << "C" << endl;
                break;
            }
            turn = sC[0] - 'a';
            sC.erase(0, 1);
        }
    }
    
    return 0;
}