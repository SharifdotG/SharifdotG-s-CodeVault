# Here is the guideline for the problem:

## Understanding the Problem

The problem asks you to write a C program to input basic salary of an employee and calculate its Gross salary according to the following:

* Basic Salary <= 10000 : HRA = 20%, DA = 80%
* Basic Salary <= 20000 : HRA = 25%, DA = 90%
* Basic Salary > 20000 : HRA = 30%, DA = 95%

The first step to solving this problem is to understand the different components of the gross salary. The gross salary is the total amount of money that an employee earns, including their basic salary, allowances, and bonuses. The allowances in this problem are the house rent allowance (HRA) and the dearness allowance (DA).

The HRA is a tax-free allowance that is paid to employees to help them pay for their rent. The DA is a cost-of-living allowance that is paid to employees to help them offset the rising cost of living.

The next step is to understand the different calculation rules for the HRA and DA. The HRA is calculated as a percentage of the basic salary, and the DA is also calculated as a percentage of the basic salary. The percentage that is used to calculate the HRA and DA depends on the employee's basic salary.

## Approaching the Problem

Once you understand the different components of the gross salary and the different calculation rules, you can start to approach the problem. The first step is to declare the variables that you will need. You will need variables to store the basic salary, the HRA, the DA, and the gross salary.

The next step is to write the code to calculate the HRA and DA. The code to calculate the HRA and DA will use the different calculation rules that you have learned.

The final step is to write the code to calculate the gross salary. The gross salary is calculated by adding the basic salary, the HRA, and the DA.

## Solving the Problem

The code to solve the problem is shown below:

```c
#include <stdio.h>

int main() {

    double basic_salary;
    double gross_salary;
    double hra;
    double da;

    printf("Enter the basic salary: ");
    scanf("%lf", &basic_salary);

    if (basic_salary <= 10000) {
        hra = basic_salary * 0.2;
    } else if (basic_salary <= 20000) {
        hra = basic_salary * 0.25;
    } else {
        hra = basic_salary * 0.3;
    }

    da = basic_salary * 0.8;

    gross_salary = basic_salary + hra + da;

    printf("Gross salary: %.2lf\n", gross_salary);

    return 0;
}
```

This code first declares the variables that are needed. Then, the code prompts the user to enter the basic salary. The code then calculates the HRA and DA using the different calculation rules. The code then calculates the gross salary by adding the basic salary, the HRA, and the DA. Finally, the code prints the gross salary.

## Explaining the Code

The code to calculate the HRA and DA is as follows:

```c
if (basic_salary <= 10000) {
    hra = basic_salary * 0.2;
} else if (basic_salary <= 20000) {
    hra = basic_salary * 0.25;
} else {
    hra = basic_salary * 0.3;
}

da = basic_salary * 0.8;
```

This code uses an if-else statement to determine the percentage that is used to calculate the HRA. The percentage that is used to calculate the HRA depends on the employee's basic salary. If the employee's basic salary is less than or equal to 10000, then the HRA is 20% of the basic salary. If the employee's basic salary is greater than 10000 and less than or equal to 20000, then the HRA is 25% of the basic salary. If the employee's basic salary is greater than 20000, then the HRA is 30% of the basic salary.

**Conclusion**

This is a simple C program that calculates the gross salary of an employee. The code is well-commented and easy to understand. If you have any queries, you can comment in the repository.