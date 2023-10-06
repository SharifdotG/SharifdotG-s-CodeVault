#include <bits/stdc++.h>

using namespace std;

int main() {
    int day, month;
    cin >> day >> month;

    int daysInMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string daysOfWeek[7] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};

    int days = 0;

    for (int i = 0; i < month - 1; i++) {
        days += daysInMonths[i];
    }

    days += day - 1;

    cout << daysOfWeek[days % 7] << endl;

    return 0;
}