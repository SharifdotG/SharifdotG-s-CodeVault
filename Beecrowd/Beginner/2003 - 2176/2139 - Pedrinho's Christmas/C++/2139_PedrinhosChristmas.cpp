#include <bits/stdc++.h>

using namespace std;

int main() {
    int month, day;

    while (cin >> month >> day) {
        if (month == 12 && day == 25) {
            cout << "E natal!" << endl;
        } else if (month == 12 && day == 24) {
            cout << "E vespera de natal!" << endl;
        } else if (month == 12 && day > 25) {
            cout << "Ja passou!" << endl;
        } else {
            int days = 0;

            if (month == 1) days = 360 - day;
            else if (month == 2) days = 360 - 31 - day;
            else if (month == 3) days = 360 - 31 - 29 - day;
            else if (month == 4) days = 360 - 31 - 29 - 31 - day;
            else if (month == 5) days = 360 - 31 - 29 - 31 - 30 - day;
            else if (month == 6) days = 360 - 31 - 29 - 31 - 30 - 31 - day;
            else if (month == 7) days = 360 - 31 - 29 - 31 - 30 - 31 - 30 - day;
            else if (month == 8) days = 360 - 31 - 29 - 31 - 30 - 31 - 30 - 31 - day;
            else if (month == 9) days = 360 - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31 - day;
            else if (month == 10) days = 360 - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - day;
            else if (month == 11) days = 360 - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - 31 - day;
            else if (month == 12) days = 360 - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - 31 - 30 - day;
            
            cout << "Faltam " << days << " dias para o natal!" << endl;
        }
    }

    return 0;
}