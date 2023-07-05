#include <iostream>

using namespace std;

int main() {
    float principal, time, rate_of_interest, simple_interest;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the time period in years: ";
    cin >> time;

    cout << "Enter the interest rate: ";
    cin >> rate_of_interest;

    simple_interest = principal * time * rate_of_interest / 100;

    cout << "The simple interest is: " << simple_interest << endl;

    return 0;
}