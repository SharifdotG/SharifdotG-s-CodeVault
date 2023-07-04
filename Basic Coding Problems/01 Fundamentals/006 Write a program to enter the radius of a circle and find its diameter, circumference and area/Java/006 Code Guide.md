# Here is the code guide for the Java program to enter the radius of a circle and find its diameter, circumference and area:

**Problem:**

The problem is to write a program that will allow the user to enter the radius of a circle and then calculate and print the diameter, circumference, and area of the circle.

**Code Explanation:**

The code for this problem is as follows:

```java
import java.util.Scanner;

public class circle {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the radius of the circle: ");
        float radius = scanner.nextFloat();

        float diameter = 2 * radius;
        float circumference = 2 * (float) Math.PI * radius;
        float area = (float) Math.PI * radius * radius;

        System.out.println("The diameter of the circle is: " + diameter);
        System.out.println("The circumference of the circle is: " + circumference);
        System.out.println("The area of the circle is: " + area);
    }
}
```

The first line of code imports the `Scanner` class, which will be used to read the radius from the user. The next line of code creates a new `Scanner` object.

The next few lines of code prompt the user to enter the radius of the circle and then store the user's input in the `radius` variable.

The next few lines of code calculate the diameter, circumference, and area of the circle. The diameter is calculated by multiplying the radius by 2. The circumference is calculated by multiplying the radius by 2 and by the mathematical constant `π`. The area is calculated by multiplying the radius by itself and then by `π`.

The last few lines of code print the diameter, circumference, and area of the circle.

**Conclusion:**

This code guide has explained the problem and the code for the Java program to enter the radius of a circle and find its diameter, circumference, and area. If you have any questions, please feel free to comment on the repository.

Here are some additional notes about the code:

* The `Scanner` class is a built-in class in Java that can be used to read input from the user.
* The mathematical constant `π` is approximately equal to 3.14159.
* The `println()` method is used to print a line of text to the console.

I hope this helps!