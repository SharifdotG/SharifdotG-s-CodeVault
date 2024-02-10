#include <bits/stdc++.h>

using namespace std;

int main() {
    int divers;
    cin >> divers;

    while (divers--) {
        string name;
        cin >> name;

        double difficulty;
        cin >> difficulty;

        double grades[7];
        for (int i = 0; i < 7; i++) {
            cin >> grades[i];
        }

        sort(grades, grades + 7);

        double total = 0;
        for (int i = 1; i < 6; i++) {
            total += grades[i];
        }

        cout << name << " " << fixed << setprecision(2) << total * difficulty << endl;
    }

    return 0;
}