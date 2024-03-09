#include <bits/stdc++.h>

using namespace std;

int main() {
    int hour, minute;
    char semicolon;

    while (cin >> hour >> semicolon >> minute) {
        int delay = 0;

        if (hour >= 7) {
            delay = (hour - 7) * 60 + minute;
        }

        cout << "Atraso maximo: " << delay << endl;

    }

    return 0;
}
