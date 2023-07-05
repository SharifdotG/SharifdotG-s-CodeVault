# Here is the code guide for the Java program to enter marks of five subjects and calculate total, average and percentage:

**Problem**

The problem is to write a program that will allow the user to enter the marks of five subjects and then calculate the total, average and percentage of the marks.

**Code Explanation**

The code for this problem is as follows:

```java
import java.util.Scanner;

public class marks {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the marks of the subjects: ");
        int subject1 = scanner.nextInt();
        int subject2 = scanner.nextInt();
        int subject3 = scanner.nextInt();
        int subject4 = scanner.nextInt();
        int subject5 = scanner.nextInt();

        int total = subject1 + subject2 + subject3 + subject4 + subject5;
        float average = total / 5.0f;
        float percentage = (total / 500.0f) * 100;

        System.out.println("The total marks of the subjects is: " + total);
        System.out.println("The average marks of the subjects is: " + average);
        System.out.println("The percentage of the total marks of the subjects is: " + percentage + "%");
    }
}
```

The first thing the code does is to import the `java.util.Scanner` class. This class allows the program to read input from the user.

The next thing the code does is to create a `Scanner` object. This object is used to read the marks of the five subjects from the user.

The code then calculates the total, average and percentage of the marks. The total is calculated by adding the marks of the five subjects together. The average is calculated by dividing the total by 5. The percentage is calculated by multiplying the average by 100.

Finally, the code prints the total, average and percentage of the marks to the console.

**Conclusion**

This code guide has explained the problem and the code for the Java program to enter marks of five subjects and calculate total, average and percentage. If you have any questions, please feel free to comment in the repository.

Here are some additional notes about the code:

* The `Scanner` object is created using the `new` keyword.
* The marks of the five subjects are read from the user using the `nextInt()` method of the `Scanner` object.
* The total, average and percentage of the marks are calculated using the `+`, `/` and `*` operators.
* The results are printed to the console using the `println()` method.

I hope this helps!