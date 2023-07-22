# Here is the code guide for the triangle type program:

## The Problem

A triangle is a polygon with three sides and three vertices. The sides of a triangle must be non-collinear, meaning that they cannot all intersect at the same point. The sum of the lengths of any two sides of a triangle must be greater than the length of the third side.

There are three types of triangles: equilateral, isosceles, and scalene.

* An equilateral triangle has three sides of equal length.
* An isosceles triangle has two sides of equal length.
* A scalene triangle has no sides of equal length.

## Code Explanation

The code for the triangle type program is as follows:

```java
import java.util.Scanner;

public class triangle_type {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the three sides of the triangle: ");
        int sideA = scanner.nextInt();
        int sideB = scanner.nextInt();
        int sideC = scanner.nextInt();

        if (sideA == sideB && sideB == sideC) {
            System.out.println("The triangle is equilateral.");
        } else if (sideA == sideB || sideA == sideC || sideB == sideC) {
            System.out.println("The triangle is isosceles.");
        } else {
            System.out.println("The triangle is scalene.");
        }
    }
}
```

The first line imports the `Scanner` class from the `java.util` package. This class will be used to read input from the user.

The next line declares a `Scanner` object called `scanner`.

The next line prints a message to the user asking them to enter the three sides of the triangle.

The next three lines read the three sides of the triangle from the user.

The next line uses an `if` statement to check if all three sides of the triangle are equal. If they are, then the program prints a message saying that the triangle is equilateral.

The next line uses an `else if` statement to check if any two of the three sides of the triangle are equal. If any two sides are equal, then the program prints a message saying that the triangle is isosceles.

The `else` statement is used to handle the case where none of the three sides of the triangle are equal. In this case, the program prints a message saying that the triangle is scalene.

The last line calls the `System.exit()` method to terminate the program.

## Conclusion

This code guide provides a detailed explanation of the triangle type program. If you have any questions about the code, please feel free to comment in the repository.