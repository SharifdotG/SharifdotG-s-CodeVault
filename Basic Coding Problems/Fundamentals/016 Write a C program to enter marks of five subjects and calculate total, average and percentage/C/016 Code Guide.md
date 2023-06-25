# Here is a detailed guideline for the problem:

**Understanding the Problem**

The problem is to write a C program to enter marks of five subjects and calculate total, average and percentage. The first step to solving this problem is to understand what the problem is asking for. What are the input and output of the program? What are the steps involved in calculating the total, average and percentage?

**Approaching the Problem**

Once you understand the problem, you can start approaching the solution. The first step is to identify the variables that you will need to store the input and output of the program. In this case, you will need variables to store the marks of the five subjects, the total marks, the average marks and the percentage.

The next step is to write the code to calculate the total, average and percentage. The total marks can be calculated by simply adding the marks of the five subjects. The average marks can be calculated by dividing the total marks by 5. The percentage can be calculated by multiplying the total marks by 100 and dividing by 500.

**Solving the Problem**

The code to solve the problem is shown below:

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

This code first prompts the user to enter the marks of the five subjects. Then, it calculates the total, average and percentage of the marks. Finally, it prints the results to the console.

**Testing the Solution**

Once you have written the code, you need to test it to make sure that it works correctly. You can test the code by entering different sets of marks and checking the results.

**Asking for Help**

If you are stuck at any point, you can ask for help in the SharifdotG's CodeVault repository. There are many other users who are willing to help you solve the problem.

I hope this guideline is helpful. Please let me know if you have any other questions.