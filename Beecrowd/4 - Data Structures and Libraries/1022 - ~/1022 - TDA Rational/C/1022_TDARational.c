#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void simplify(int *numerator, int *denominator) {
    if (*denominator < 0) {
        *numerator = -(*numerator);
        *denominator = -(*denominator);
    }

    int divisor = gcd(abs(*numerator), abs(*denominator));
    *numerator /= divisor;
    *denominator /= divisor;
}

void processOperation(int n1, int d1, int n2, int d2, char op) {
    int result_numerator, result_denominator;

    switch (op) {
    case '+':
        result_numerator = n1 * d2 + n2 * d1;
        result_denominator = d1 * d2;
        break;
    case '-':
        result_numerator = n1 * d2 - n2 * d1;
        result_denominator = d1 * d2;
        break;
    case '*':
        result_numerator = n1 * n2;
        result_denominator = d1 * d2;
        break;
    case '/':
        result_numerator = n1 * d2;
        result_denominator = n2 * d1;
        break;
    default:
        printf("Invalid operator\n");
        return;
    }

    printf("%d/%d ", result_numerator, result_denominator);

    simplify(&result_numerator, &result_denominator);

    printf("= %d/%d\n", result_numerator, result_denominator);
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int n1, d1, n2, d2;
        char op, slash1, slash2;

        scanf("%d %c %d %c %d %c %d", &n1, &slash1, &d1, &op, &n2, &slash2,
              &d2);

        processOperation(n1, d1, n2, d2, op);
    }

    return 0;
}
