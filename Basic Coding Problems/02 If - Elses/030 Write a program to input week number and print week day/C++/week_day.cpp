#include <iostream>

using namespace std;

int main() {
    int week_number;

    cout << "Enter week number (1-7): ";
    cin >> week_number;

    if (week_number == 1) {
        cout << "Sunday";
    } else if (week_number == 2) {
        cout << "Monday";
    } else if (week_number == 3) {
        cout << "Tuesday";
    } else if (week_number == 4) {
        cout << "Wednesday";
    } else if (week_number == 5) {
        cout << "Thursday";
    } else if (week_number == 6) {
        cout << "Friday";
    } else if (week_number == 7) {
        cout << "Saturday";
    } else {
        cout << "Invalid Input";
    }

    return 0;
}