/**
 * @file arithmetic.cpp
 * @brief A C++ program to enter two numbers and perform all arithmetic operations.
 *
 * @author SharifdotG
 * @date 2023-07-03
 */

#include <iostream>

using namespace std;

/**
 * @brief The main function.
 *
 * @param argc The number of arguments.
 * @param argv The arguments.
 *
 * @return The exit status.
 */
int main(int argc, char *argv[])
{

    // Declare variables.
    int a, b;

    // Prompt the user for two numbers.
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Calculate the sum, difference, product, quotient, and remainder of the two numbers.
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;

    // Print the results.
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    // Return 0 to indicate success.
    return 0;
}