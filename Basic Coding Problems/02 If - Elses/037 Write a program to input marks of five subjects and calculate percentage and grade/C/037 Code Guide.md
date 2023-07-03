# Here is a detailed guideline for the problem:

**Understanding the problem**

The problem is to write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. The program should calculate the percentage of the student's marks and print the corresponding grade. The grades are as follows:

* Percentage >= 90% : Grade A
* Percentage >= 80% : Grade B
* Percentage >= 70% : Grade C
* Percentage >= 60% : Grade D
* Percentage >= 40% : Grade E
* Percentage  <  40% : Grade F

**Approaching the problem**

The first step is to declare the variables that will be used in the program. These variables will store the marks of the student in the five subjects, the percentage of the student's marks, and the grade.

The next step is to prompt the user to enter the marks of the student in the five subjects. This can be done using the `printf()` function.

The third step is to calculate the percentage of the student's marks. This can be done by dividing the sum of the student's marks by 5.

The fourth step is to check the percentage of the student's marks and print the corresponding grade. This can be done using the `if` statement.

**Solving the problem**

The code below solves the problem:

```c
#include <stdio.h>

int main() {

    float physics, chemistry, biology, mathematics, computer, percentage;

    printf("Enter the marks of Physics, Chemistry, Biology, Mathematics and Computer respectively: ");
    scanf("%f %f %f %f %f", &physics, &chemistry, &biology, &mathematics, &computer);

    percentage = (physics + chemistry + biology + mathematics + computer) / 5;

    if (percentage >= 90) {
        printf("Grade A");
    } else if (percentage >= 80) {
        printf("Grade B");
    } else if (percentage >= 70) {
        printf("Grade C");
    } else if (percentage >= 60) {
        printf("Grade D");
    } else if (percentage >= 40) {
        printf("Grade E");
    } else {
        printf("Grade F");
    }

    return 0;
}
```

**Explaining the code**

The `printf()` function in the first line prompts the user to enter the marks of the student in the five subjects. The `scanf()` function in the second line reads the marks entered by the user and stores them in the respective variables.

The `percentage` variable stores the percentage of the student's marks. This variable is calculated in the third line using the following formula:

```c
percentage = (physics + chemistry + biology + mathematics + computer) / 5
```

The `if` statement in the fourth line checks the percentage of the student's marks and prints the corresponding grade. The grades are printed using the `printf()` function.

**Questions**

If you have any questions about the problem or the code, please feel free to comment in the repository. I will be happy to answer your questions.

**Conclusion**

I hope this guideline is helpful. Please let me know if you have any other questions.