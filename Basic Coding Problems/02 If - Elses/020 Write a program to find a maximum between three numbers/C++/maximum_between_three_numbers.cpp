#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int max_num = num1;
    if (num2 > max_num) {
        max_num = num2;
    } else if (num3 > max_num) {
        max_num = num3;
    }

    cout << max_num << " is the maximum number\n";
    return 0;
}