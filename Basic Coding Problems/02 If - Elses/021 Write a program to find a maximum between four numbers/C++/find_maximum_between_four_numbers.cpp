#include <iostream>

using namespace std;

int main() {
    int first, second, third, fourth;

    cout << "Enter four numbers: ";
    cin >> first >> second >> third >> fourth;

    int max = first;
    if (second > max) {
        max = second;
    } if (third > max) {
        max = third;
    } if (fourth > max) {
        max = fourth;
    }

    cout << "The maximum number is: " << max << endl;

    return 0;
}