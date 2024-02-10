# CODE HINT - Read This Before You See The Code!

## Problem Description
You are tasked with solving a geometry problem. Given two angles of a triangle, your goal is to calculate the third angle. A triangle always has a total of 180 degrees, so you need to find the missing angle when two angles are provided as input.

### Example Input and Output
- **Example 1:**
  - Input: Angle1 = 45 degrees, Angle2 = 60 degrees
  - Output: Angle3 = 75 degrees

- **Example 2:**
  - Input: Angle1 = 30 degrees, Angle2 = 90 degrees
  - Output: Angle3 = 60 degrees

### Constraints
- The input angles are integers.
- The sum of the input angles will always be less than 180 degrees.

## Understand the Problem
To solve this problem, you need to determine the value of the missing angle in a triangle when two angles are already given. Remember that the sum of all angles in a triangle is always 180 degrees. Therefore, you need to find Angle3, which is equal to 180 degrees minus the sum of Angle1 and Angle2.

## Possible Approaches
There is only one straightforward approach to solving this problem: subtracting the sum of the given angles from 180 degrees to find the missing angle.

## Plan the Approach
1. Read the values of Angle1 and Angle2.
2. Calculate the sum of Angle1 and Angle2.
3. Calculate Angle3 by subtracting the sum from 180 degrees.
4. Output the value of Angle3 as the result.

## Algorithm
1. Input Angle1 and Angle2 as integers.
2. Calculate the sum_of_angles = Angle1 + Angle2.
3. Calculate Angle3 = 180 - sum_of_angles.
4. Output Angle3 as the result.

## Pseudocode
```plaintext
1. Input Angle1, Angle2
2. sum_of_angles = Angle1 + Angle2
3. Angle3 = 180 - sum_of_angles
4. Output Angle3
```

## Test Cases
Test your solution with the following test cases:

- Test Case 1:
  - Input: Angle1 = 45, Angle2 = 60
  - Expected Output: Angle3 = 75

- Test Case 2:
  - Input: Angle1 = 30, Angle2 = 90
  - Expected Output: Angle3 = 60

- Test Case 3:
  - Input: Angle1 = 120, Angle2 = 45
  - Expected Output: Angle3 = 15

- Test Case 4:
  - Input: Angle1 = 60, Angle2 = 45
  - Expected Output: Angle3 = 75

- Test Case 5:
  - Input: Angle1 = 0, Angle2 = 90
  - Expected Output: Angle3 = 90

## Additional Guidance
- Make sure to handle the input and output correctly according to the problem description.
- Double-check your formula for calculating Angle3.
- Test your solution with various test cases to ensure it works for all scenarios.

Remember to attempt solving the problem on your own first before referring to the complete code. Understanding the problem-solving process is essential for your growth as a programmer. Good luck!