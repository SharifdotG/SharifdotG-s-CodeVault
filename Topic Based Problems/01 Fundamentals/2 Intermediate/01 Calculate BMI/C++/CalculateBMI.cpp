#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double weight, height;
    
    cout << "Enter your weight in kilogram: ";
    cin >> weight;

    cout << "Enter your height in meter: ";
    cin >> height;

    double bmi = weight / (height * height);

    cout << fixed << setprecision(2) << "Your BMI is " << bmi << endl;
    
    return 0;
}