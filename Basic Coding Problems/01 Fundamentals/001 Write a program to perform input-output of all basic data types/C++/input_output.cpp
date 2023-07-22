#include <iostream>

using namespace std;

int main() {
    char Character;
    unsigned char UnsignedCharacter;
    short ShortInteger;
    int Integer;
    unsigned int UnsignedInteger;
    long LongInteger;
    unsigned long UnsignedLong;
    unsigned long long UnsignedLongLong;
    float FloatValue;
    double DoubleValue;
    long double LongDoubleValue;

    cout << "Enter a character: ";
    cin >> Character;

    cout << "Enter an unsigned character: ";
    cin >> UnsignedCharacter;

    cout << "Enter a short integer: ";
    cin >> ShortInteger;

    cout << "Enter an integer: ";
    cin >> Integer;

    cout << "Enter an unsigned integer: ";
    cin >> UnsignedInteger;

    cout << "Enter a long integer: ";
    cin >> LongInteger;

    cout << "Enter an unsigned long integer: ";
    cin >> UnsignedLong;

    cout << "Enter an unsigned long long integer: ";
    cin >> UnsignedLongLong;

    cout << "Enter a float: ";
    cin >> FloatValue;

    cout << "Enter a double: ";
    cin >> DoubleValue;

    cout << "Enter a long double: ";
    cin >> LongDoubleValue;

    cout << "\nThe character is: " << Character << endl;
    cout << "The unsigned character is: " << UnsignedCharacter << endl;
    cout << "The short integer is: " << ShortInteger << endl;
    cout << "The integer is: " << Integer << endl;
    cout << "The unsigned integer is: " << UnsignedInteger << endl;
    cout << "The long integer is: " << LongInteger << endl;
    cout << "The unsigned long integer is: " << UnsignedLong << endl;
    cout << "The unsigned long long integer is: " << UnsignedLongLong << endl;
    cout << "The float is: " << FloatValue << endl;
    cout << "The double is: " << DoubleValue << endl;
    cout << "The long double is: " << LongDoubleValue << endl;

    return 0;
}