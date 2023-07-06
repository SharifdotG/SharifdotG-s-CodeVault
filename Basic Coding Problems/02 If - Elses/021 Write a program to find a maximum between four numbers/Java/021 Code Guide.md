# Here is the Code Guide for the program to find the maximum between four numbers:

**The Problem**

The problem is to write a program that takes four numbers as input and prints the maximum number.

**Code Explanation**

The code is written in Java and uses the `Scanner` class to read the four numbers from the user. The `max` variable is initialized to the first number entered by the user. Then, a series of `if` statements are used to compare the `max` variable to the other three numbers. If any of the other numbers are greater than the `max` variable, then the `max` variable is updated to the larger number. Finally, the `max` variable is printed to the console.

Here is a detailed explanation of the code:

```java
import java.util.Scanner;

public class find_maximum_between_four_numbers {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter four numbers: ");
        int first = scanner.nextInt();
        int second = scanner.nextInt();
        int third = scanner.nextInt();
        int fourth = scanner.nextInt();

        int max = first;
        if (second > max) {
            max = second;
        } if (third > max) {
            max = third;
        } if (fourth > max) {
            max = fourth;
        }

        System.out.println("The maximum number is: " + max);
    }
}
```

* The first line of code imports the `Scanner` class. This class is used to read user input.
* The second line of code creates a new `Scanner` object. This object is used to read the four numbers from the user.
* The third line of code prints a message to the console asking the user to enter four numbers.
* The fourth, fifth, sixth, and seventh lines of code read the four numbers from the user.
* The eighth line of code initializes the `max` variable to the first number entered by the user.
* The ninth, tenth, eleventh, and twelfth lines of code use a series of `if` statements to compare the `max` variable to the other three numbers. If any of the other numbers are greater than the `max` variable, then the `max` variable is updated to the larger number.
* The thirteenth line of code prints the `max` variable to the console.

**Conclusion**

This code can be used to find the maximum between four numbers. If you have any questions about the code, please feel free to comment on the repository.

I hope this helps! Let me know if you have any other questions.