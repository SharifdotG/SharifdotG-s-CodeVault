#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        int leds = 0;
        for (char c : s) {
            switch (c) {
                case '1':
                    leds += 2;
                    break;
                case '2':
                case '3':
                case '5':
                    leds += 5;
                    break;
                case '4':
                    leds += 4;
                    break;
                case '6':
                case '9':
                case '0':
                    leds += 6;
                    break;
                case '7':
                    leds += 3;
                    break;
                case '8':
                    leds += 7;
                    break;
            }
        }

        cout << leds << " leds" << endl;
    }

    return 0;
}