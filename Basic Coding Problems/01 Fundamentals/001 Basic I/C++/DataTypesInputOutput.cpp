#include <iostream>

using namespace std;

int main() {
    char character;
    unsigned char unsignedCharacter;
    short shortInteger;
    int integer;
    unsigned int unsignedInteger;
    long longInteger;
    unsigned long unsignedLong;
    unsigned long long unsignedLongLong;
    float floatValue;
    double doubleValue;
    long double longDoubleValue;
    string stringVariable;

    cout << "Enter a character: ";
    character = cin.get();
    cin.ignore();

    cout << "Enter an unsigned character: ";
    unsignedCharacter = cin.get();
    cin.ignore();

    cout << "Enter a short integer: ";
    cin >> shortInteger;

    cout << "Enter an integer: ";
    cin >> integer;

    cout << "Enter an unsigned integer: ";
    cin >> unsignedInteger;

    cout << "Enter a long integer: ";
    cin >> longInteger;

    cout << "Enter an unsigned long integer: ";
    cin >> unsignedLong;

    cout << "Enter an unsigned long long integer: ";
    cin >> unsignedLongLong;

    cout << "Enter a float: ";
    cin >> floatValue;

    cout << "Enter a double: ";
    cin >> doubleValue;

    cout << "Enter a long double: ";
    cin >> longDoubleValue;

    cout << "Enter a string: ";
    cin.ignore();
    getline(cin, stringVariable);

    cout << "\nThe character is: " << character << endl;
    cout << "The unsigned character is: " << unsignedCharacter << endl;
    cout << "The short integer is: " << shortInteger << endl;
    cout << "The integer is: " << integer << endl;
    cout << "The unsigned integer is: " << unsignedInteger << endl;
    cout << "The long integer is: " << longInteger << endl;
    cout << "The unsigned long integer is: " << unsignedLong << endl;
    cout << "The unsigned long long integer is: " << unsignedLongLong << endl;
    cout << "The float is: " << floatValue << endl;
    cout << "The double is: " << doubleValue << endl;
    cout << "The long double is: " << longDoubleValue << endl;
    cout << "The string is: " << stringVariable << endl;

    return 0;
}