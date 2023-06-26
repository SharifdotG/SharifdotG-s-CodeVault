# Here is the guideline for the coding problem:

**Understanding the Problem**

The problem is to write a C program to print the day of the week name using the switch case statement. The program will take a day number as input from the user and print the corresponding day of the week name.

**Approaching the Problem**

The first step is to define the variables that will be used in the program. These variables include the day number, a string to store the day of the week name, and an error message.

The next step is to prompt the user to enter the day number. The user's input will be stored in the day number variable.

The third step is to use the switch case statement to check the value of the day number. The switch case statement will have a case for each day of the week. The corresponding day of the week name will be printed when the day number matches a case.

If the day number does not match any of the cases, the default case will be executed. The default case will print an error message.

**Solving the Problem**

The code below solves the problem:

```c
#include <stdio.h>

int main() {

  int day;
  char day_of_week[10];
  char error_message[] = "Invalid input! Please enter a day number between 1-7.";

  printf("Enter day number (1-7): ");
  scanf("%d", &day);

  switch (day) {
    case 1:
      strcpy(day_of_week, "Sunday");
      break;
    case 2:
      strcpy(day_of_week, "Monday");
      break;
    case 3:
      strcpy(day_of_week, "Tuesday");
      break;
    case 4:
      strcpy(day_of_week, "Wednesday");
      break;
    case 5:
      strcpy(day_of_week, "Thursday");
      break;
    case 6:
      strcpy(day_of_week, "Friday");
      break;
    case 7:
      strcpy(day_of_week, "Saturday");
      break;
    default:
      printf("%s\n", error_message);
  }

  printf("The day of the week is %s.\n", day_of_week);

  return 0;
}
```

**Explaining the Code**

The code above first defines the two variables `day` and `day_of_week_name`. The `day` variable will store the day number entered by the user, and the `day_of_week_name` variable will store the corresponding day of the week name.

The next step is to write the switch case statement. The switch case statement will check the value of the `day` variable, and then print the corresponding day of the week name. The default case will be used to handle invalid input.

The final step is to return 0 on success.

**Questions**

If you have any questions about the problem or the code, please feel free to comment in the repository. I will be happy to help.

**Conclusion**

I hope this guideline is helpful. Thank you for your time.