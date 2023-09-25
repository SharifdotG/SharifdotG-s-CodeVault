# CODE HINT - Read This Before You See The Code!

## Problem Description

In the "Rectangle Perimeter" problem, you are given the dimensions of a rectangle (length and width), and your task is to calculate its perimeter. The perimeter of a rectangle is simply the sum of all its sides. This is a simple mathematical problem that can be solved using basic arithmetic operations.

### Input
- You will be given two positive integers, `length` and `width`, representing the dimensions of the rectangle.

### Output
- Your program should output a single positive integer, which is the perimeter of the rectangle.

## Example Input and Output

**Input:**
```
length = 5
width = 3
```

**Output:**
```
Perimeter: 16
```

In this example, the rectangle has a length of 5 units and a width of 3 units. The perimeter is calculated as (2 * length) + (2 * width) = (2 * 5) + (2 * 3) = 10 + 6 = 16 units.

## Constraints

- 1 ≤ `length`, `width` ≤ 10^5

## Understand the Problem

To solve this problem, you need to understand how to calculate the perimeter of a rectangle. It's a fundamental mathematical operation. The perimeter is the sum of all the sides of the rectangle. Each side has a length equal to either the length or the width of the rectangle.

## Possible Approaches

There is only one main approach to solving this problem, as it's a straightforward mathematical operation. However, you can explore different ways to implement the same formula for calculating the perimeter.

## Plan the Approach

The approach to solving this problem is quite simple:

1. Read the input values of `length` and `width`.
2. Calculate the perimeter using the formula: `perimeter = 2 * (length + width)`.
3. Print the calculated perimeter.

This approach directly implements the mathematical definition of the perimeter of a rectangle.

## Algorithm

1. Read `length` and `width` from the input.
2. Calculate `perimeter` using the formula: `perimeter = 2 * (length + width)`.
3. Print `perimeter`.

## Pseudocode

Here's the pseudocode for solving this problem:

```
// Read input
length = read_integer()
width = read_integer()

// Calculate perimeter
perimeter = 2 * (length + width)

// Print the result
print(perimeter)
```

## Test Cases

Test Case 1:
```
Input:
length = 5
width = 3
Output:
Perimeter: 16
```

Test Case 2:
```
Input:
length = 10
width = 7
Output:
Perimeter: 34
```

Test Case 3:
```
Input:
length = 1
width = 1
Output:
Perimeter: 4
```

Test Case 4:
```
Input:
length = 100000
width = 100000
Output:
Perimeter: 400000
```

## Additional Guidance

Before diving into the code, make sure you understand how to calculate the perimeter of a rectangle. It's a simple mathematical concept. Focus on translating this mathematical operation into code.

Try to solve the problem on your own first using the provided guidance. If you get stuck or want to check your solution, feel free to look at the code on my GitHub profile, but only after making a genuine effort to solve it yourself.

Follow my GitHub Profile [SharifdotG](https://github.com/SharifdotG) for more coding tips and solutions to various programming problems. Happy coding!