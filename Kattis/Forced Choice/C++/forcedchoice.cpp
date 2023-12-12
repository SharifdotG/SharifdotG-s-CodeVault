#include <bits/stdc++.h>

using namespace std;

int main() {
    int cards, prediction, steps;
    cin >> cards >> prediction >> steps;

    for (int i = 0; i < steps; i++) {
        int choices;
        cin >> choices;

        bool found = false;

        for (int j = 0; j < choices; j++) {
            int choice;
            cin >> choice;

            if (choice == prediction) {
                found = true;
            }
        }

        if (found) {
            cout << "KEEP" << endl;
        } else {
            cout << "REMOVE" << endl;
        }
    }

    return 0;
}