# Code Guide: Rectangle Perimeter

## Introduction
Welcome to SharifdotG's CodeVault! This repository aims to provide a comprehensive collection of code solutions to various programming problems. In this guide, we'll be exploring the problem "Rectangle Perimeter" and its corresponding Java code solution.

## Problem Description
The "Rectangle Perimeter" problem requires calculating the perimeter of a rectangle based on its length and breadth. Given the length and breadth as input, the task is to find the perimeter of the rectangle. The perimeter of a rectangle is given by the formula: perimeter = 2 * (length + breadth).

## About the Problem
Rectangles are fundamental geometric shapes encountered in various real-life scenarios. They are commonly found in architecture, construction, and design fields. The concept of calculating the perimeter of a rectangle is essential in these domains for accurate measurements and layout planning.

## Approach
To solve the "Rectangle Perimeter" problem, I used a straightforward approach. I first obtained the length and breadth of the rectangle from the user using the `Scanner` class. Then, I applied the perimeter formula to calculate the perimeter. The algorithm involves basic arithmetic operations and doesn't require any complex data structures.

## Code Walkthrough
Let's dive into the code step by step:

```java
import java.util.Scanner;

public class RectanglePerimeter {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the length of the rectangle: ");
        int length = scanner.nextInt();

        System.out.print("Enter the breadth of the rectangle: ");
        int breadth = scanner.nextInt();

        int perimeter = 2 * (length + breadth);

        System.out.println("The perimeter of the rectangle is: " + perimeter);

        scanner.close();
    }
}
```

1. Import the necessary `Scanner` class to read input from the user.
2. Create a `Scanner` object to read input.
3. Prompt the user to enter the length of the rectangle and store it in the `length` variable.
4. Prompt the user to enter the breadth of the rectangle and store it in the `breadth` variable.
5. Calculate the perimeter using the provided formula and store it in the `perimeter` variable.
6. Display the calculated perimeter using `System.out.println`.
7. Close the `Scanner` to release resources.

## Complexity Analysis
The time complexity of this algorithm is constant, O(1), as it involves basic arithmetic operations and a fixed number of input prompts. The space complexity is also O(1) as only a few variables are used to store input values and the result.

## Examples
Let's consider some examples:

Example 1:
- Length: 5
- Breadth: 3
- Perimeter = 2 * (5 + 3) = 16

Example 2:
- Length: 10
- Breadth: 7
- Perimeter = 2 * (10 + 7) = 34

## Test Cases
Here are a few test cases to validate the code:
1. Length = 0, Breadth = 0 (Minimum input values)
2. Length = 10, Breadth = 0 (One side as 0)
3. Length = 5, Breadth = 5 (Square)
4. Length = 15, Breadth = 12 (Large rectangle)

## Troubleshooting
If you encounter any issues while using the code, ensure that you are providing valid numeric inputs for length and breadth. Double-check the formula for calculating the perimeter. If you still face difficulties, don't hesitate to reach out for assistance.

## Related Resources
For a deeper understanding of basic geometric concepts and algorithms, you might find these resources helpful:
- [Geometry: Perimeter of Rectangle](https://www.mathsisfun.com/geometry/perimeter.html)
- [Java Scanner Class](https://docs.oracle.com/en/java/javase/16/docs/api/java.base/java/util/Scanner.html)

## Conclusion
Congratulations! You've successfully learned how to calculate the perimeter of a rectangle using Java. Remember that practice is key to mastering programming concepts. Feel free to explore more problems and solutions in my [GitHub repository](https://github.com/SharifdotG/SharifdotG-s-CodeVault). For updates and more coding insights, consider following my [GitHub profile](https://github.com/SharifdotG). Happy coding! 🚀