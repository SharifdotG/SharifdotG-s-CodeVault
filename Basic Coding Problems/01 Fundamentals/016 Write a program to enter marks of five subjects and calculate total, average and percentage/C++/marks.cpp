#include <iostream>

using namespace std;

int main() {
    int subject1, subject2, subject3, subject4, subject5;
    int total;
    float average;
    float percentage;

    cout << "Enter the marks of the subjects: ";
    cin >> subject1 >> subject2 >> subject3 >> subject4 >> subject5;

    total = subject1 + subject2 + subject3 + subject4 + subject5;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    cout << "The total marks of the subjects is: " << total << endl;
    cout << "The average marks of the subjects is: " << average << endl;
    cout << "The percentage of the total marks of the subjects is: " << percentage << "%" << endl;

    return 0;
}