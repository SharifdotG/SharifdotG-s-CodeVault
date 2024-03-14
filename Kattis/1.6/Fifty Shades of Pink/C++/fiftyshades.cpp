#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfShades, numberOfPinkShades = 0;
    cin >> numberOfShades;

    for (int i = 0; i < numberOfShades; i++) {
        string shade;
        cin >> shade;

        transform(shade.begin(), shade.end(), shade.begin(), ::tolower);

        if (shade.find("pink") != string::npos || shade.find("rose") != string::npos) {
            numberOfPinkShades++;
        }
    }

    if (numberOfPinkShades == 0) {
        cout << "I must watch Star Wars with my daughter" << endl;
    } else cout << numberOfPinkShades << endl;

    return 0;
}
