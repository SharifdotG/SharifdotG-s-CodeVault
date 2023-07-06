#include <iostream>

using namespace std;

int main() {
    int first_number, second_number, max_number;

    cout << "Enter two numbers: ";
    cin >> first_number >> second_number;

    if (first_number > second_number) {
        max_number = first_number;
    } else {
        max_number = second_number;
    }

    cout << max_number << " is the maximum number.\n";

    return 0;
}
