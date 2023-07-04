#include <iostream>

using namespace std;

int main() {
    int number_of_days;
    int years;
    int weeks;
    int remaining_days;

    cout << "Enter the number of days: ";
    cin >> number_of_days;

    years = number_of_days / 365;
    remaining_days = number_of_days % 365;
    weeks = remaining_days / 7;
    remaining_days = remaining_days % 7;

    cout << "Years: " << years << endl;
    cout << "Weeks: " << weeks << endl;
    cout << "Days: " << remaining_days << endl;

    return 0;
}