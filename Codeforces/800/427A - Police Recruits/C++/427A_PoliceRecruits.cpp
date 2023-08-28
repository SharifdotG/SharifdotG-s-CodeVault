#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, police = 0, untreated = 0;
    cin >> n;

    while (n--) {
        int event;
        cin >> event;

        if (event > 0) police += event;
        else if (police > 0) police--;
        else untreated++;
    }

    cout << untreated << endl;

    return 0;
}