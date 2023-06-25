# Here is the detailed guideline for the problem:

## Understanding the problem

The problem is to write a C program to enter Principal, Time and Rate of Interest and calculate Simple Interest.

The first step to understanding the problem is to define the terms involved.

* **Principal** is the amount of money borrowed or invested.
* **Time** is the length of time for which the money is borrowed or invested.
* **Interest rate** is the percentage of the principal that is paid as interest each year.
* **Simple interest** is the total amount of interest paid over the life of the loan or investment.

Once we understand the terms involved, we can start to think about how to solve the problem.

## Approaching the problem

The first step in solving the problem is to write down the formula for simple interest.

```
Simple interest = Principal * Time * Interest rate / 100
```

The next step is to write a program that prompts the user to enter the principal, time, and interest rate.

The program should then calculate the simple interest using the formula and print the result.

## Solving the problem

The code below solves the problem:

```c
#include <stdio.h>

int main() {

  float principal;
  float time;
  float interest_rate;
  float simple_interest;

  printf("Enter the principal amount: ");
  scanf("%f", &principal);

  printf("Enter the time period in years: ");
  scanf("%f", &time);

  printf("Enter the interest rate: ");
  scanf("%f", &interest_rate);

  simple_interest = principal * time * interest_rate / 100;

  printf("The simple interest is: %f\n", simple_interest);

  return 0;
}
```

This code first declares four variables: `principal`, `time`, `interest_rate`, and `simple_interest`.

The `principal` variable stores the amount of money borrowed or invested.

The `time` variable stores the length of time for which the money is borrowed or invested.

The `interest_rate` variable stores the percentage of the principal that is paid as interest each year.

The `simple_interest` variable stores the total amount of interest paid over the life of the loan or investment.

The code then prompts the user to enter the principal, time, and interest rate.

The code then calculates the simple interest using the formula and prints the result.

## Conclusion

This is a simple program that solves the problem of calculating simple interest.

If you have any questions, please feel free to comment in the repository.

Thank you for reading!