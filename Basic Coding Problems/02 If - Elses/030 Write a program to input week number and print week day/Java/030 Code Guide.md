# Here is the code guide for the program to input week number and print week day:

## The Problem

The problem is to write a program that will accept a week number as input from the user and print the corresponding day of the week. The week number can be from 1 to 7, where 1 represents Sunday, 2 represents Monday, and so on.

## Code Explanation

The code for the program is as follows:

```java
import java.util.Scanner;

public class week_day {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter week number (1-7): ");
        int week_number = scanner.nextInt();

        String dayOfWeek;
        if (week_number == 1) {
            dayOfWeek = "Sunday";
        } else if (week_number == 2) {
            dayOfWeek = "Monday";
        } else if (week_number == 3) {
            dayOfWeek = "Tuesday";
        } else if (week_number == 4) {
            dayOfWeek = "Wednesday";
        } else if (week_number == 5) {
            dayOfWeek = "Thursday";
        } else if (week_number == 6) {
            dayOfWeek = "Friday";
        } else if (week_number == 7) {
            dayOfWeek = "Saturday";
        } else {
            dayOfWeek = "Invalid Input";
        }

        System.out.println("The day of the week is: " + dayOfWeek);
    }
}
```

The first step in the code is to import the `java.util.Scanner` class. This class provides a way for the program to read input from the user.

The next step is to create a `Scanner` object and call its `nextInt()` method to read the week number from the user. The `nextInt()` method returns an integer value, which is then stored in the `week_number` variable.

The next step is to declare a `String` variable called `dayOfWeek`. This variable will be used to store the name of the day of the week.

The next step is to use an `if` statement to check the value of the `week_number` variable. If the value of the `week_number` variable is 1, then the `dayOfWeek` variable is set to the string "Sunday". If the value of the `week_number` variable is 2, then the `dayOfWeek` variable is set to the string "Monday", and so on.

If the value of the `week_number` variable is not between 1 and 7, then the `dayOfWeek` variable is set to the string "Invalid Input".

The next step is to print the value of the `dayOfWeek` variable to the console.

The last step is to call the `main()` method, which is the entry point for the program.

## Conclusion

This is a simple program that demonstrates how to input a week number and print the corresponding day of the week. The code is well-commented and easy to understand. If you have any questions about the code, please feel free to comment in the repository.