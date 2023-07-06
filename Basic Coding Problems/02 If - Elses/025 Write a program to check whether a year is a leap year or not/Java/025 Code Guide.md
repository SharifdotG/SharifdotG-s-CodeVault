# Here is the Code Guide for the leap year program:

**The Problem**

A leap year is a year that has 366 days instead of the usual 365 days. Leap years occur every four years, except for century years that are not divisible by 400. For example, the years 2000 and 2004 are leap years, but the years 1700 and 1800 are not.

**Code Explanation**

The code to check whether a year is a leap year is as follows:

```java
import java.util.Scanner;

public class leap_year {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter a year: ");
        int year = scanner.nextInt();

        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            System.out.println(year + " is a leap year");
        } else {
            System.out.println(year + " is not a leap year");
        }
    }
}
```

The code first declares a `Scanner` object to read input from the user. Then, it prompts the user to enter a year and stores the input in an `int` variable called `year`.

The next step is to check whether the year is a leap year. The code uses the following logic to check for leap years:

* If the year is divisible by 4 and not divisible by 100, then it is a leap year.
* If the year is divisible by 400, then it is a leap year.

If the year meets either of these conditions, then the code prints a message that the year is a leap year. Otherwise, the code prints a message that the year is not a leap year.

**Conclusion**

This code can be used to check whether a year is a leap year. The code is well-commented and easy to understand. If you have any questions about the code, please feel free to comment in the repository.

I hope this helps!