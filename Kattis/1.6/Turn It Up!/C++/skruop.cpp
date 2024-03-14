#include <bits/stdc++.h>

using namespace std;

int main() {
    int volume = 7, requests;
    cin >> requests;

    string request;

    for (int i = 0; i < requests + 1; i++) {
        getline(cin, request);

        if (volume < 10 && request == "Skru op!") volume++;
        if (volume > 0 && request == "Skru ned!") volume--;
    }

    cout << volume << endl;

    return 0;
}