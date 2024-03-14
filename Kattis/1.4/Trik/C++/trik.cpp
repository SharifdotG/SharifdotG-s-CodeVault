#include <bits/stdc++.h>

using namespace std;

int main() {
    string moves;
    cin >> moves;

    int indexOfTheCup = 1;
    
    for (int i = 0; i < moves.size(); i++) {
        if (moves[i] == 'A') {
            if (indexOfTheCup == 1) indexOfTheCup = 2;
            else if (indexOfTheCup == 2) indexOfTheCup = 1;
        } else if (moves[i] == 'B') {
            if (indexOfTheCup == 2) indexOfTheCup = 3;
            else if (indexOfTheCup == 3) indexOfTheCup = 2;
        } else if (moves[i] == 'C') {
            if (indexOfTheCup == 1) indexOfTheCup = 3;
            else if (indexOfTheCup == 3) indexOfTheCup = 1;
        }
    }

    cout << indexOfTheCup << endl;

    return 0;
}