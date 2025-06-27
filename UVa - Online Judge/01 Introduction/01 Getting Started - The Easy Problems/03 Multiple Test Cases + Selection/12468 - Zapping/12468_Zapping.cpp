#include <bits/stdc++.h>

using namespace std;

int main() {
    int currentChannel, nextChannel;

    while (cin >> currentChannel >> nextChannel) {
        if (currentChannel == -1 && nextChannel == -1) {
            break;
        }

        int buttonPresses = abs(currentChannel - nextChannel);

        if (buttonPresses > 50) {
            buttonPresses = 100 - buttonPresses;
        }

        cout << buttonPresses << endl;
    }
    
    return 0;
}