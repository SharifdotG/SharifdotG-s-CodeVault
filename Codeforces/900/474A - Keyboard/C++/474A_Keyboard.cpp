#include <bits/stdc++.h>

using namespace std;

int main() {
    char direction;
    cin >> direction;

    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

    string input;
    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        for (int j = 0; j < keyboard.length(); j++) {
            if (input[i] == keyboard[j]) {
                if (direction == 'R') cout << keyboard[j - 1];
                else cout << keyboard[j + 1];
            }
        }
    }
    
    return 0;
}