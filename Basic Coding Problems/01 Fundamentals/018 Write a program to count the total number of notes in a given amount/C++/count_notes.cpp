#include <iostream>

using namespace std;

int main() {
    int amount;
    int notes_of_500, notes_of_200, notes_of_100, notes_of_50, notes_of_20, notes_of_10, notes_of_5, notes_of_2, notes_of_1;

    cout << "Enter the amount: ";
    cin >> amount;

    notes_of_500 = amount / 500;
    amount %= 500;

    notes_of_200 = amount / 200;
    amount %= 200;

    notes_of_100 = amount / 100;
    amount %= 100;

    notes_of_50 = amount / 50;
    amount %= 50;

    notes_of_20 = amount / 20;
    amount %= 20;

    notes_of_10 = amount / 10;
    amount %= 10;

    notes_of_5 = amount / 5;
    amount %= 5;

    notes_of_2 = amount / 2;
    amount %= 2;

    notes_of_1 = amount;

    cout << "The number of 500 notes is: " << notes_of_500 << endl;
    cout << "The number of 200 notes is: " << notes_of_200 << endl;
    cout << "The number of 100 notes is: " << notes_of_100 << endl;
    cout << "The number of 50 notes is: " << notes_of_50 << endl;
    cout << "The number of 20 notes is: " << notes_of_20 << endl;
    cout << "The number of 10 notes is: " << notes_of_10 << endl;
    cout << "The number of 5 notes is: " << notes_of_5 << endl;
    cout << "The number of 2 notes is: " << notes_of_2 << endl;
    cout << "The number of 1 notes is: " << notes_of_1 << endl;

    return 0;
}