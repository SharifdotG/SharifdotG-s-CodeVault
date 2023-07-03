/**
 * @file sum_numbers.cpp
 * @author SharifdotG
 * @date 2023-07-03
 * @brief A C++ program to enter two numbers and find their sum.
 */

#include <iostream>

using namespace std;

/**
 * @brief The main function.
 * @return 0 on success, non-zero on error.
 */
int main() {

    int a, b, sum;

    /**
     * @brief Prompts the user to enter the first number.
     */
    cout << "Enter the first number: ";

    /**
     * @brief Reads the first number from the user.
     */
    cin >> a;

    /**
     * @brief Prompts the user to enter the second number.
     */
    cout << "Enter the second number: ";

    /**
     * @brief Reads the second number from the user.
     */
    cin >> b;

    /**
     * @brief Calculates the sum of the two numbers.
     */
    sum = a + b;

    /**
     * @brief Prints the sum of the two numbers.
     */
    cout << "The sum of the two numbers is: " << sum << endl;

    return 0;
}