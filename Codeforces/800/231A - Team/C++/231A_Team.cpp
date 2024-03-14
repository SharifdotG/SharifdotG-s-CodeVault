#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    int petya, vasya, tonya;
    int problemsSolved = 0;

    for (int i = 0; i < testCases; i++) {
        cin >> petya >> vasya >> tonya;

        if (petya + vasya + tonya >= 2) {
            problemsSolved++;
        }
    }

    cout << problemsSolved << endl;
    
    return 0;
}