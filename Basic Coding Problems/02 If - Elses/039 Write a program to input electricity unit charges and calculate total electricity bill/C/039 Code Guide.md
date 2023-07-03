# Here is the guideline for the coding problem:

**Understanding the problem**

The problem is to write a C program to input electricity unit charges and calculate total electricity bill according to the given conditions. The conditions are as follows:

* For first 50 units, the unit charge is Rs. 0.50/unit.
* For next 100 units, the unit charge is Rs. 0.75/unit.
* For next 100 units, the unit charge is Rs. 1.20/unit.
* For units above 250, the unit charge is Rs. 1.50/unit.
* An additional surcharge of 20% is added to the bill.

**Approaching the problem**

The first step is to define the variables that will be used in the program. These variables will include the number of units consumed, the unit charge, and the total bill.

The next step is to write the code to calculate the bill. The code will need to use the given conditions to determine the unit charge for each range of units consumed. The total bill will then be calculated by adding up the unit charges for each range.

Finally, the code will need to print the total bill.

**Solving the problem**

The code to solve the problem is shown below:

```c
#include <stdio.h>

int main() {

  float unit;
  float bill;

  printf("Enter the number of units consumed: ");
  scanf("%f", &unit);

  if (unit <= 50) {
    bill = unit * 0.50;
  } else if (unit <= 150) {
    bill = 25 + (unit - 50) * 0.75;
  } else if (unit <= 250) {
    bill = 100 + (unit - 150) * 1.20;
  } else {
    bill = 220 + (unit - 250) * 1.50;
  }

  bill = bill + (bill * 0.20);

  printf("Total electricity bill is: %.2f\n", bill);

  return 0;
}
```

This code first defines the variables `unit` and `bill`. The variable `unit` will store the number of units consumed, and the variable `bill` will store the total bill.

The next step is to get the number of units consumed from the user. This is done using the `scanf()` function.

The next step is to calculate the bill. The code uses the `if` statement to determine the unit charge for each range of units consumed. The total bill is then calculated by adding up the unit charges for each range.

Finally, the code prints the total bill. This is done using the `printf()` function.

**Explaining how the code works**

The code works by first getting the number of units consumed from the user. The code then calculates the bill according to the given conditions. The total bill is then printed.

The `if` statement is used to determine the unit charge for each range of units consumed. The `if` statement checks the value of the `unit` variable and executes the appropriate code block based on the value.

The `printf()` function is used to print the total bill. The `printf()` function takes two arguments: the first argument is the text that will be printed, and the second argument is the format specifier. The format specifier tells the `printf()` function how to format the text that will be printed.

**Questions**

If you have any questions about the code, please feel free to comment in the repository. I will be happy to answer your questions.

**Conclusion**

I hope this guideline helps you understand the problem and how to solve it. If you have any other questions, please feel free to ask.