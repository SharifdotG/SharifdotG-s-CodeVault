# CODE HINT - Read This Before You See The Code!

## Problem Description
You are tasked with creating a program that converts distances from kilometers to miles. Given a distance in kilometers, you need to calculate and return the equivalent distance in miles.

### Example Input and Output
**Input:**
- Kilometers: 10

**Output:**
- Miles: 6.21371

**Input:**
- Kilometers: 42

**Output:**
- Miles: 26.097

### Constraints
- The input distance in kilometers will be a positive float value.

## Understand the Problem
Before jumping into coding, let's understand the problem thoroughly.

1. You are given a distance in kilometers.
2. You need to convert this distance to miles.

## Possible Approaches
There's one primary approach to solve this problem:
- Use the conversion formula: 1 kilometer is equal to 0.621371 miles. So, multiply the given distance in kilometers by 0.621371 to get the equivalent distance in miles.

## Plan the Approach
Now, let's plan the high-level approach based on the possible approach:

1. Take the input distance in kilometers.
2. Multiply this distance by the conversion factor (0.621371) to get the distance in miles.
3. Return the result as the output.

## Algorithm
The algorithm can be summarized in these steps:

1. Read the input distance in kilometers (let's call it `distance_km`).
2. Calculate the distance in miles using the formula: `distance_miles = distance_km * 0.621371`.
3. Return `distance_miles` as the output.

## Pseudocode
Here's the pseudocode for the algorithm:

```
function kilometersToMiles(distance_km):
    distance_miles = distance_km * 0.621371
    return distance_miles
```

## Test Cases
Test your function with these additional test cases:

**Input:**
- Kilometers: 0
**Output:**
- Miles: 0.0

**Input:**
- Kilometers: 100
**Output:**
- Miles: 62.1371

**Input:**
- Kilometers: 5.5
**Output:**
- Miles: 3.417405

## Additional Guidance
- Remember to handle the input as a float, as distances can be non-integer values.
- Make sure your function returns the distance in miles as a float with the appropriate precision.
- If you encounter any issues or errors, don't hesitate to consult the pseudocode or algorithm to debug your code.

Now, try implementing the solution on your own first. Understanding the problem-solving process is as important as writing the code. Good luck!