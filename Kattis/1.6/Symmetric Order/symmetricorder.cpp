#include <bits/stdc++.h>

using namespace std;

int main() {
    int sets, setNumber = 0;
    
    while (cin >> sets && sets != 0) {
        string names[sets];
        for (int i = 0; i < sets; i++) {
            cin >> names[i];
        }

        setNumber++;
        cout << "SET " << setNumber << endl;

        for (int i = 0; i < sets; i += 2) {
            cout << names[i] << endl;
        }

        for (int i = sets - 1; i > 0; i--) {
            if (i % 2) {
                cout << names[i] << endl;
            }
        }
    }

    return 0;
}
