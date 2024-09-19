# Code Guide - Circle Properties

## Introduction
Welcome to the Code Guide for solving the problem of Circle Properties. In this guide, we will explore how to calculate various properties of a circle, such as its diameter, circumference, and area. This is a fundamental problem in geometry and mathematics.

## Problem Description
The problem involves taking the radius of a circle as input and calculating three properties of the circle:
1. Diameter of the circle
2. Circumference (perimeter) of the circle
3. Area of the circle

### Input:
- The radius of the circle (a positive real number).

### Output:
- Diameter (a real number)
- Circumference (a real number)
- Area (a real number)

## About the Problem
**History:** The study of circles and their properties dates back thousands of years to ancient civilizations like the Greeks and Egyptians. The concept of π (pi) to calculate the circumference and area of a circle is attributed to Archimedes.

**Information and Trivias:** Circles have numerous applications in the real world, from engineering and architecture to physics and computer graphics. They are used in designing wheels, gears, and circular structures like bridges and stadiums.

## Approach
To solve this problem, we can use well-known formulas for calculating the diameter, circumference, and area of a circle. Here's a high-level overview:

### Implementation
1. Read the radius of the circle from the user.
2. Calculate the diameter using the formula: Diameter = 2 * Radius.
3. Calculate the circumference using the formula: Circumference = 2 * π * Radius.
4. Calculate the area using the formula: Area = π * Radius^2.
5. Display the calculated values for diameter, circumference, and area.

### Algorithm & Data Structures
No complex algorithms or data structures are needed for this problem. We rely on basic mathematical formulas.

## Code Walkthrough
Let's break down the code step by step:

```cpp
#include <iostream>
#include <cmath>

#define M_PI 3.14159265358979323846

using namespace std;

int main() {
    double radius;

    cout << "Enter radius: ";
    cin >> radius;

    // Calculate and print the diameter
    cout << "Diameter of circle is: " << 2 * radius << endl;

    // Calculate and print the circumference
    cout << "Circumference of circle is: " << 2 * M_PI * radius << endl;

    // Calculate and print the area
    cout << "Area of circle is: " << M_PI * pow(radius, 2) << endl;

    return 0;
}
```

- We include the necessary headers and define the constant `M_PI` for π (pi).
- We read the radius from the user.
- We calculate the diameter, circumference, and area using the provided formulas.
- We display the results.

## Complexity Analysis
- **Time Complexity:** The time complexity of this code is O(1) because the calculations involve simple arithmetic operations that do not depend on the size of the input.
- **Space Complexity:** The space complexity is O(1) as well since we only use a constant amount of memory to store the radius and the constants.

## Execution
The code is executed by compiling it using a C++ compiler (e.g., g++) and then running the resulting binary. The user is prompted to enter the radius, and the program performs the calculations and displays the results.

## Examples
- Calculating properties of a circle is essential in fields like engineering and physics, where circular objects need to be analyzed.
- In real-life applications, this code can be used to determine the size and properties of wheels, gears, or circular plots of land.

## Test Cases
Here are some test cases to validate the code:

**Test Case 1:**
- Input: Radius = 5.0
- Expected Output:
  - Diameter of circle is: 10.0
  - Circumference of circle is: 31.4159 (approximately)
  - Area of circle is: 78.5398 (approximately)

**Test Case 2:**
- Input: Radius = 3.5
- Expected Output:
  - Diameter of circle is: 7.0
  - Circumference of circle is: 21.9911 (approximately)
  - Area of circle is: 38.4845 (approximately)

## Troubleshooting
- Ensure that you provide a valid positive real number as input for the radius.
- If you encounter errors during compilation or execution, check for typos or syntax issues in the code.

## Related Resources
- [Circle - Wikipedia](https://en.wikipedia.org/wiki/Circle)
- [Pi (π) - Wikipedia](https://en.wikipedia.org/wiki/Pi)

## Conclusion
This Code Guide has provided a comprehensive overview of how to calculate various properties of a circle, including diameter, circumference, and area, using a simple C++ program. Understanding these fundamental geometric calculations is essential in various fields, and this code serves as a basic building block for more complex geometric problems. Happy coding!

Follow the author's GitHub Profile: [SharifdotG](https://github.com/SharifdotG) for more code and projects.