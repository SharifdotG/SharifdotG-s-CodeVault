#include <iostream>

using namespace std;

int main() {
    char character;
    unsigned char unsigned_character;
    short short_integer;
    int integer;
    unsigned int unsigned_integer;
    long long_integer;
    unsigned long unsigned_long;
    unsigned long long unsigned_long_long;
    float float_value;
    double double_value;
    long double long_double_value;

    cout << "Enter a character: ";
    cin >> character;

    cout << "Enter an unsigned character: ";
    cin >> unsigned_character;

    cout << "Enter a short integer: ";
    cin >> short_integer;

    cout << "Enter an integer: ";
    cin >> integer;

    cout << "Enter an unsigned integer: ";
    cin >> unsigned_integer;

    cout << "Enter a long integer: ";
    cin >> long_integer;

    cout << "Enter an unsigned long integer: ";
    cin >> unsigned_long;

    cout << "Enter an unsigned long long integer: ";
    cin >> unsigned_long_long;

    cout << "Enter a float: ";
    cin >> float_value;

    cout << "Enter a double: ";
    cin >> double_value;

    cout << "Enter a long double: ";
    cin >> long_double_value;

    cout << "\nThe character is: " << character << endl;
    cout << "The unsigned character is: " << unsigned_character << endl;
    cout << "The short integer is: " << short_integer << endl;
    cout << "The integer is: " << integer << endl;
    cout << "The unsigned integer is: " << unsigned_integer << endl;
    cout << "The long integer is: " << long_integer << endl;
    cout << "The unsigned long integer is: " << unsigned_long << endl;
    cout << "The unsigned long long integer is: " << unsigned_long_long << endl;
    cout << "The float is: " << float_value << endl;
    cout << "The double is: " << double_value << endl;
    cout << "The long double is: " << long_double_value << endl;

    return 0;
}