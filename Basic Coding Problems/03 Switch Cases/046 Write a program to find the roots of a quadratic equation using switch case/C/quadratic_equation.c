/**
 * @file quadratic_equation.c
 * @author SharifdotG
 * @date 2023-06-29
 * @brief A C program to find the roots of a quadratic equation using switch case.
 */

#include <stdio.h>
#include <math.h>

/**
 * @brief The main function.
 * @return 0 on success.
 */
int main() {

    /**
     * @brief The coefficients of the quadratic equation.
     */
    float coefficient_a, coefficient_b, coefficient_c;

    /**
     * @brief The discriminant of the quadratic equation.
     */
    float discriminant;

    /**
     * @brief The roots of the quadratic equation.
     */
    float root_1, root_2;

    /**
     * @brief The real part of the complex root of the quadratic equation.
     */
    float real_part;

    /**
     * @brief The imaginary part of the complex root of the quadratic equation.
     */
    float imaginary_part;

    /**
     * @brief Prompt the user to enter the values of the coefficients.
     */
    printf("Enter the values of coefficient a, b, and c: ");
    scanf("%f %f %f", &coefficient_a, &coefficient_b, &coefficient_c);

    /**
     * @brief Calculate the discriminant of the quadratic equation.
     */
    discriminant = coefficient_b * coefficient_b - 4 * coefficient_a * coefficient_c;

    /**
     * @brief Use a switch statement to determine the nature of the roots of the quadratic equation.
     */
    switch (discriminant > 0) {

        /**
         * @brief If the discriminant is positive, then the roots are real and distinct.
         */
        case 1:
            root_1 = (-coefficient_b + sqrt(discriminant)) / (2 * coefficient_a);
            root_2 = (-coefficient_b - sqrt(discriminant)) / (2 * coefficient_a);
            printf("The roots are %.2f and %.2f\n", root_1, root_2);
            break;

        /**
         * @brief If the discriminant is equal to 0, then the roots are real and equal.
         */
        case 0:
            root_1 = root_2 = -coefficient_b / (2 * coefficient_a);
            printf("The roots are %.2f and %.2f\n", root_1, root_2);
            break;

        /**
         * @brief If the discriminant is negative, then the roots are complex and distinct.
         */
        default:
            real_part = -coefficient_b / (2 * coefficient_a);
            imaginary_part = sqrt(-discriminant) / (2 * coefficient_a);
            printf("The roots are %.2f + %.2fi and %.2f - %.2fi\n", real_part, imaginary_part, real_part, imaginary_part);
    }

    return 0;
}