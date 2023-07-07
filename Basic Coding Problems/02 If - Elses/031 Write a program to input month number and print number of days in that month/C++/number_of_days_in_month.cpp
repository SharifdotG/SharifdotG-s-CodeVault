#include <iostream>

using namespace std;

int main() {
    int month;

    cout << "Enter the month number: ";
    cin >> month;

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        cout << "The number of days in this month is 31.\n";
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        cout << "The number of days in this month is 30.\n";
    } else if (month == 2) {
        cout << "The number of days in this month is 28 or 29.\n";
    } else {
        cout << "Invalid month number.\n";
    }

    return 0;
}