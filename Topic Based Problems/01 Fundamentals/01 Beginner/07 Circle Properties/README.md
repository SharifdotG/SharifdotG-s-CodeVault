# CODE HINT - Read This Before You See The Code!

## Problem Description
You are tasked with solving the "Print Circle Properties" problem. In this challenge, you'll be working with circles. Your goal is to write a program or function that calculates and prints various properties of a circle based on its radius.

### Input
- The input will consist of one or more lines, each containing a positive floating-point number representing the radius of a circle. You can assume valid input.

### Output
- For each input radius, your program should calculate and print the following properties of the circle:
    1. Diameter
    2. Circumference (perimeter)
    3. Area
    4. Length of an Arc (angle provided as input)
    5. Sector Area (angle provided as input)

### Example Input and Output
**Input:**
```
5.0
2.5
```

**Output:**
```
Radius: 5.0
Diameter: 10.0
Circumference: 31.42
Area: 78.54

Radius: 2.5
Diameter: 5.0
Circumference: 15.71
Area: 19.63
```

### Constraints
- Radii are positive floating-point numbers with at most two decimal places.
- The angle for arc and sector area calculations will be in degrees, and it's also a positive floating-point number with at most two decimal places.

## Understand the Problem
Before diving into the code, let's understand the problem thoroughly. We need to calculate various properties of a circle (diameter, circumference, area, length of an arc, and sector area) given the radius of the circle and an angle (for arc and sector area).

## Possible Approaches
There are no multiple approaches to solving this problem; we have a straightforward mathematical formula for each property of the circle based on its radius.

## Plan the Approach
1. Read the radius of the circle from input.
2. Calculate the diameter using the formula: `diameter = 2 * radius`.
3. Calculate the circumference using the formula: `circumference = 2 * π * radius` (where π is approximately 3.14159).
4. Calculate the area using the formula: `area = π * radius * radius`.
5. If an angle is provided, calculate the length of the arc using the formula: `arc_length = (angle / 360) * circumference` and the sector area using the formula: `sector_area = (angle / 360) * area`.
6. Print the results for each property.

## Algorithm
Here's a step-by-step algorithm for solving this problem:
1. Read the radius from input.
2. Calculate the diameter as `2 * radius`.
3. Calculate the circumference as `2 * π * radius`.
4. Calculate the area as `π * radius * radius`.
5. If an angle is provided, read the angle from input.
6. If an angle is provided, calculate the arc length as `(angle / 360) * circumference`.
7. If an angle is provided, calculate the sector area as `(angle / 360) * area`.
8. Print the radius, diameter, circumference, and area.
9. If an angle is provided, print the arc length and sector area.

## Pseudocode
Here's the pseudocode representation of the algorithm:

```plaintext
for each radius in input:
    diameter = 2 * radius
    circumference = 2 * π * radius
    area = π * radius * radius
    print "Radius:", radius
    print "Diameter:", diameter
    print "Circumference:", circumference
    print "Area:", area
    if angle is provided:
        arc_length = (angle / 360) * circumference
        sector_area = (angle / 360) * area
        print "Arc Length:", arc_length
        print "Sector Area:", sector_area
```

## Test Cases
Let's test the code with some sample inputs:
- Test Case 1:
    - Input: `5.0`
    - Expected Output:
        ```
        Radius: 5.0
        Diameter: 10.0
        Circumference: 31.42
        Area: 78.54
        ```
- Test Case 2:
    - Input: `2.5`
    - Expected Output:
        ```
        Radius: 2.5
        Diameter: 5.0
        Circumference: 15.71
        Area: 19.63
        ```
- Test Case 3:
    - Input: `3.0 45.0`
    - Expected Output:
        ```
        Radius: 3.0
        Diameter: 6.0
        Circumference: 18.85
        Area: 28.27
        Arc Length: 1.57
        Sector Area: 4.71
        Radius: 45.0
        Diameter: 90.0
        Circumference: 282.74
        Area: 6361.73
        Arc Length: 15.71
        Sector Area: 110.25
        ```

## Final Remarks
Remember to approach this problem step by step. First, calculate the basic properties of the circle (radius, diameter, circumference, and area). Then, if an angle is provided, calculate the arc length and sector area. It's crucial to handle input and output as specified in the problem description.

Try to solve this problem on your own first to gain a deeper understanding of circle properties. Once you've attempted it, you can check the GitHub profile mentioned for a possible code solution. Good luck!