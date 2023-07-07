# Here is the code guide for the problem "Write a program to input month number and print number of days in that month":

## The Problem

The problem is to write a program that takes a month number as input and prints the number of days in that month. The program should work for all 12 months of the year.

## Code Explanation

The code for the problem is as follows:

```java
import java.util.Scanner;

public class number_of_days_in_month {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the month number: ");
        int month = scanner.nextInt();

        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            System.out.println("The number of days in this month is 31.");
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            System.out.println("The number of days in this month is 30.");
        } else if (month == 2) {
            System.out.println("The number of days in this month is 28 or 29.");
        } else {
            System.out.println("Invalid month number.");
        }
    }
}
```

The first step in the code is to import the `Scanner` class. This class allows us to read input from the user.

The next step is to create a `Scanner` object and store it in a variable named `scanner`.

The next step is to prompt the user to enter the month number and store the input in a variable named `month`.

The next step is to use an `if` statement to check the value of `month`. If `month` is equal to 1, 3, 5, 7, 8, 10, or 12, then the program prints the message "The number of days in this month is 31."

If `month` is equal to 4, 6, 9, or 11, then the program prints the message "The number of days in this month is 30."

If `month` is equal to 2, then the program prints the message "The number of days in this month is 28 or 29."

Finally, if `month` is not equal to any of the valid month numbers, then the program prints the message "Invalid month number."

## Conclusion

This code guide should help you to understand how the code for the problem works. If you have any questions, please feel free to comment on the repository.