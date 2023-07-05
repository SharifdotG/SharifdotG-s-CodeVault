# Here is the Code Guide for the program to enter marks of five subjects and calculate total, average and percentage:

**Problem**

The problem is to write a program that will allow the user to enter the marks of five subjects and then calculate the total, average and percentage of the marks.

**Code Explanation**

The code for this program is as follows:

```c
#include <stdio.h>

int main() {
    int subject1, subject2, subject3, subject4, subject5;
    int total;
    float average;
    float percentage;

    printf("Enter the marks of the subjects: ");
    scanf("%d %d %d %d %d", &subject1, &subject2, &subject3, &subject4, &subject5);

    total = subject1 + subject2 + subject3 + subject4 + subject5;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    printf("The total marks of the subjects is: %d\n", total);
    printf("The average marks of the subjects is: %.2f\n", average);
    printf("The percentage of the total marks of the subjects is: %.2f%%\n", percentage);

    return 0;
}
```

The first step in the code is to declare the variables that will be used. These variables are:

* `subject1`, `subject2`, `subject3`, `subject4`, `subject5`: These variables are used to store the marks of the five subjects.
* `total`: This variable is used to store the total marks of the five subjects.
* `average`: This variable is used to store the average marks of the five subjects.
* `percentage`: This variable is used to store the percentage of the total marks of the five subjects.

The next step in the code is to prompt the user to enter the marks of the five subjects. This is done using the following code:

```c
printf("Enter the marks of the subjects: ");
scanf("%d %d %d %d %d", &subject1, &subject2, &subject3, &subject4, &subject5);
```

The `printf()` function is used to print a message to the user. The `scanf()` function is used to read the marks of the five subjects from the user.

The next step in the code is to calculate the total, average and percentage of the marks. This is done using the following code:

```c
total = subject1 + subject2 + subject3 + subject4 + subject5;
average = total / 5.0;
percentage = (total / 500.0) * 100;
```

The `total` variable is calculated by adding the values of the `subject1`, `subject2`, `subject3`, `subject4` and `subject5` variables. The `average` variable is calculated by dividing the `total` variable by 5.0. The `percentage` variable is calculated by multiplying the `total` variable by 100 and then dividing by 500.0.

The final step in the code is to print the total, average and percentage of the marks. This is done using the following code:

```c
printf("The total marks of the subjects is: %d\n", total);
printf("The average marks of the subjects is: %.2f\n", average);
printf("The percentage of the total marks of the subjects is: %.2f%%\n", percentage);
```

The `printf()` function is used to print the total, average and percentage of the marks to the user.

**Conclusion**

This Code Guide has explained the problem and the code for the program to enter marks of five subjects and calculate total, average and percentage. I hope this Code Guide has been helpful. If you have any questions, please feel free to comment in the repository.

Thank you for reading!