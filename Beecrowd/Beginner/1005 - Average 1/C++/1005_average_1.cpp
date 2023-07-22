#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double first_number, second_number, average;

    cin >> first_number >> second_number;

    average = (first_number * 3.5 + second_number * 7.5) / (3.5 + 7.5);

    cout << "MEDIA = " << fixed << setprecision(5) << average << endl;
    
    return 0;
}