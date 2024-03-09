#include <bits/stdc++.h>

using namespace std;

int main() {
    int players, games;

    while (cin >> players >> games) {
        int count = 0;

        for (int i = 0; i < players; i++) {
            bool win = true;

            for (int j = 0; j < games; j++) {
                int game;
                cin >> game;

                if (game == 0) {
                    win = false;
                }
            }

            if (win) count++;
        }
        
        cout << count << endl;
    }
    
    return 0;
}