# Here is the Code Guide for the Java program to enter two numbers and find their sum:

**The Problem**

The problem is to write a program that enters two numbers and finds their sum. The program should first prompt the user to enter the two numbers. Then, the program should add the two numbers together and print the sum.

**Code Explanation**

The code for the program is as follows:

```java
import java.util.Scanner;

public class sum_numbers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the first number: ");
        int firstNumber = scanner.nextInt();

        System.out.print("Enter the second number: ");
        int secondNumber = scanner.nextInt();

        int sum = firstNumber + secondNumber;

        System.out.println("The sum of the two numbers is: " + sum);
    }
}
```

The first line of code imports the `Scanner` class from the `java.util` package. This class will be used to read input from the user.

The next two lines of code create a `Scanner` object and prompt the user to enter the two numbers.

The next line of code declares an `int` variable called `firstNumber` and assigns the value entered by the user to the variable.

The next line of code declares an `int` variable called `secondNumber` and assigns the value entered by the user to the variable.

The next line of code declares an `int` variable called `sum` and initializes it to the sum of `firstNumber` and `secondNumber`.

The last line of code prints the value of `sum` to the console.

**Conclusion**

This code guide has explained the problem and the code for the Java program to enter two numbers and find their sum. If you have any questions, please feel free to comment on the repository.

Thank you for reading!