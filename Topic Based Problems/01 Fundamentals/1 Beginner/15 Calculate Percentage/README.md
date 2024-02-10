# CODE HINT - Read This Before You See The Code!

## Problem Description

You are tasked with writing a program that calculates the percentage of a given value with respect to a total. This is a fundamental mathematical operation, commonly used in various applications like grading systems, financial calculations, and data analysis. Your program should take two numbers as input: the value you want to find the percentage of, and the total value it is a part of. The program should then calculate and output the percentage.

## Example Input and Output

**Example 1:**

Input:
```
Value: 75
Total: 150
```
Output:
```
50%
```

**Example 2:**

Input:
```
Value: 30
Total: 50
```
Output:
```
60%
```

## Constraints

- Both the value and total are positive integers.
- The value will always be less than or equal to the total.
- The output percentage should be rounded to the nearest integer.

## Understand the Problem

Before diving into writing code, it's crucial to have a clear understanding of the problem.

- You are given two numbers: a value and a total.
- You need to calculate the percentage of the value with respect to the total.
- The percentage is calculated as `(value / total) * 100`.

## Possible Approaches

Let's explore possible ways to solve this problem:

1. **Mathematical Formula**: The most straightforward approach is to use the formula `(value / total) * 100` directly to calculate the percentage.

2. **Proportion Method**: Think of the value as a part of a whole (total). Calculate what fraction of the whole it represents and then convert it to a percentage.

## Plan the Approach

We will go with the first approach, which involves using the mathematical formula. This approach is simple and efficient.

## Algorithm

Here's the step-by-step algorithm to solve this problem:

1. Accept the value and total as input from the user.

2. Calculate the percentage using the formula `(value / total) * 100`.

3. Round the calculated percentage to the nearest integer (you can use built-in functions for this).

4. Display the calculated percentage with a '%' sign.

## Pseudocode

```plaintext
1. Accept value from the user
2. Accept total from the user
3. Calculate percentage as (value / total) * 100
4. Round percentage to the nearest integer
5. Display percentage with '%' sign
```

## Test Cases

Test Case 1:
- Input: 
  - Value: 75
  - Total: 150
- Expected Output: "50%"

Test Case 2:
- Input:
  - Value: 30
  - Total: 50
- Expected Output: "60%"

Test Case 3:
- Input:
  - Value: 0
  - Total: 100
- Expected Output: "0%"

Test Case 4:
- Input:
  - Value: 100
  - Total: 100
- Expected Output: "100%"

## Additional Guidance

- Make sure to handle rounding properly. Most programming languages provide functions for this purpose.
- Remember that percentage values should be displayed with a '%' sign.
- Don't forget to handle edge cases where the value is 0 or equal to the total.
- Take advantage of the examples and test cases provided to validate your solution.

**Final Remarks**

Before you proceed to see the actual code, I encourage you to try solving this problem on your own. Understanding the logic behind such calculations is essential, and it's a valuable skill for programming and data analysis tasks. If you have any questions or need further assistance, feel free to reach out. Good luck, and happy coding!

Follow my GitHub Profile [SharifdotG](https://github.com/SharifdotG) for more coding tips and challenges!