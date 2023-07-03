/**
 * @file input_output.cpp
 * @author SharifdotG
 * @date 2023-07-03
 * @brief A C++ program to perform input/output of all basic data types.
 */

#include <iostream>

using namespace std;

/**
 * @brief The main function.
 *
 * This function prompts the user to enter a value for each of the basic data types,
 * and then prints the value that was entered.
 *
 * @return 0 on success, non-zero on error.
 */
int main() {

    /**
     * @brief A character variable.
     */
    char charVal;

    /**
     * @brief An unsigned character variable.
     */
    unsigned char unsignedCharVal;

    /**
     * @brief A short integer variable.
     */
    short shortVal;

    /**
     * @brief An integer variable.
     */
    int intVal;

    /**
     * @brief An unsigned integer variable.
     */
    unsigned int unsignedIntVal;

    /**
     * @brief A long integer variable.
     */
    long longVal;

    /**
     * @brief An unsigned long integer variable.
     */
    unsigned long unsignedLongVal;

    /**
     * @brief An unsigned long long integer variable.
     */
    unsigned long long unsignedLongLongVal;

    /**
     * @brief A float variable.
     */
    float floatVal;

    /**
     * @brief A double variable.
     */
    double doubleVal;

    /**
     * @brief A long double variable.
     */
    long double longDoubleVal;

    // Prompt the user to enter a value for each of the basic data types.

    cout << "Enter a character: ";
    cin >> charVal;

    cout << "Enter an unsigned character: ";
    cin >> unsignedCharVal;

    cout << "Enter a short integer: ";
    cin >> shortVal;

    cout << "Enter an integer: ";
    cin >> intVal;

    cout << "Enter an unsigned integer: ";
    cin >> unsignedIntVal;

    cout << "Enter a long integer: ";
    cin >> longVal;

    cout << "Enter an unsigned long integer: ";
    cin >> unsignedLongVal;

    cout << "Enter an unsigned long long integer: ";
    cin >> unsignedLongLongVal;

    cout << "Enter a float: ";
    cin >> floatVal;

    cout << "Enter a double: ";
    cin >> doubleVal;

    cout << "Enter a long double: ";
    cin >> longDoubleVal;

    // Print the values that were entered.

    cout << "\nThe character is: " << charVal << endl;
    cout << "The unsigned character is: " << unsignedCharVal << endl;
    cout << "The short integer is: " << shortVal << endl;
    cout << "The integer is: " << intVal << endl;
    cout << "The unsigned integer is: " << unsignedIntVal << endl;
    cout << "The long integer is: " << longVal << endl;
    cout << "The unsigned long integer is: " << unsignedLongVal << endl;
    cout << "The unsigned long long integer is: " << unsignedLongLongVal << endl;
    cout << "The float is: " << floatVal << endl;
    cout << "The double is: " << doubleVal << endl;
    cout << "The long double is: " << longDoubleVal << endl;

    return 0;
}