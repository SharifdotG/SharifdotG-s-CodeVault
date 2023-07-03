/**
 * @file quadratic_equation.c
 * @author SharifdotG
 * @date 2023-06-26
 * @brief A C program to find all roots of a quadratic equation.
 */

#include <stdio.h>
#include <math.h>

/**
 * @brief The main function.
 * @return 0 on success, non-zero on error.
 */
int main() {

    /**
     * @brief The coefficients of the quadratic equation.
     */
    float coefficientA, coefficientB, coefficientC;

    /**
     * @brief The discriminant of the quadratic equation.
     */
    float discriminant;

    /**
     * @brief The two roots of the quadratic equation.
     */
    float root1, root2;

    /**
     * @brief The real part of the complex root of the quadratic equation.
     */
    float realPart;

    /**
     * @brief The imaginary part of the complex root of the quadratic equation.
     */
    float imaginaryPart;

    /**
     * @brief Prompt the user to enter the values of the coefficients.
     */
    printf("Enter the value of coefficientA, coefficientB, coefficientC: ");
    scanf("%f %f %f", &coefficientA, &coefficientB, &coefficientC);

    /**
     * @brief Calculate the discriminant of the quadratic equation.
     */
    discriminant = coefficientB * coefficientB - 4 * coefficientA * coefficientC;

    /**
     * @brief Check if the discriminant is positive, zero, or negative.
     */
    if (discriminant > 0) {
        /**
         * @brief Calculate the two real roots of the quadratic equation.
         */
        root1 = (-coefficientB + sqrt(discriminant)) / (2 * coefficientA);
        root2 = (-coefficientB - sqrt(discriminant)) / (2 * coefficientA);

        /**
         * @brief Print the two real roots of the quadratic equation.
         */
        printf("The roots are: %.2f and %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        /**
         * @brief The quadratic equation has one repeated real root.
         */
        root1 = root2 = -coefficientB / (2 * coefficientA);

        /**
         * @brief Print the one repeated real root of the quadratic equation.
         */
        printf("The roots are: %.2f and %.2f\n", root1, root2);
    } else {
        /**
         * @brief The quadratic equation has two complex roots.
         */
        realPart = -coefficientB / (2 * coefficientA);
        imaginaryPart = sqrt(-discriminant) / (2 * coefficientA);

        /**
         * @brief Print the two complex roots of the quadratic equation.
         */
        printf("The roots are: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}