# Code Guide - Triangle Angle

## Introduction
This Code Guide addresses the problem of calculating the third angle of a triangle given two of its angles. The problem falls under the category of basic geometry and involves finding the missing angle of a triangle.

## Problem Description
The problem is to find the third angle of a triangle when two of its angles are known. The input consists of two angle values in degrees, and the output is the value of the third angle in degrees. The sum of the angles in any triangle is always 180 degrees, so the third angle can be calculated by subtracting the sum of the first two angles from 180 degrees.

## About the Problem
**History:** The concept of calculating angles in triangles has been a fundamental part of geometry since ancient times. The knowledge of the properties of triangles and their angles is essential in various fields such as architecture, engineering, and physics.

**Information and Trivias:** 
- The sum of the interior angles of a triangle is always 180 degrees.
- Triangles are classified based on their angles as acute (all angles less than 90 degrees), obtuse (one angle greater than 90 degrees), or right-angled (one angle equal to 90 degrees).

## Approach
### Implementation
1. Take user input for the values of the first two angles.
2. Calculate the third angle by subtracting the sum of the first two angles from 180 degrees.
3. Print the calculated third angle.

### Algorithm & Data Structures
No complex algorithms or data structures are needed for this problem. It's a straightforward calculation using basic arithmetic.

## Code Walkthrough
```python
firstAngle = int(input("Enter first angle: "))  # Input first angle
secondAngle = int(input("Enter second angle: "))  # Input second angle
thirdAngle = 180 - (firstAngle + secondAngle)  # Calculate third angle
print("Third angle is:", thirdAngle)  # Print the result
```

## Complexity Analysis
### Time Complexity
The time complexity of this code is O(1), as it performs a constant number of arithmetic operations regardless of the input values.

### Space Complexity
The space complexity is also O(1) since it uses a fixed amount of memory to store the input and calculated values.

### Efficiency
This code is highly efficient for solving the given problem, as it directly applies the mathematical relationship between the angles in a triangle.

## Execution
The code is executed in the following steps:
1. User provides input for the first angle.
2. User provides input for the second angle.
3. The code calculates the third angle using the provided inputs.
4. The calculated third angle is printed as output.

## Examples
This code can be used in various scenarios where angles in triangles need to be calculated. For example:
- In architectural design to ensure proper angles in building structures.
- In physics calculations involving angles of incidence and reflection.
- In game development for character movement and collision detection.

## Test Cases
Here are some test cases to validate the code:
1. **Input:** `Enter first angle: 45`, `Enter second angle: 60`
   **Output:** `Third angle is: 75`
   
2. **Input:** `Enter first angle: 90`, `Enter second angle: 45`
   **Output:** `Third angle is: 45`

3. **Input:** `Enter first angle: 30`, `Enter second angle: 120`
   **Output:** `Third angle is: 30`

## Troubleshooting
- Ensure that the input values are valid angles (between 0 and 180 degrees).
- Check for any syntax errors in the code.
- Make sure to provide numerical input as integers.

## Related Resources
- [Geometry in Real Life](https://www.mathsisfun.com/geometry/geometry-real-life.html)
- [Triangle Properties](https://www.mathplanet.com/education/geometry/triangles/triangle-properties)

## Conclusion
This code provides a simple and efficient solution for finding the third angle of a triangle given two angles. It can be applied in various real-life scenarios where understanding and calculating angles are essential. Feel free to explore more about geometry and mathematical concepts to expand your knowledge further. For more code-related content, follow my GitHub profile: [SharifdotG](https://github.com/SharifdotG).