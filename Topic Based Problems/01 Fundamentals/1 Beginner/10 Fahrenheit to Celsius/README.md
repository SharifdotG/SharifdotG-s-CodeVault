# CODE HINT - Read This Before You See The Code!

## Problem Description
You are tasked with converting temperatures from Fahrenheit to Celsius. The input is a temperature in Fahrenheit, and the output should be the equivalent temperature in Celsius.

## Example Input and Output
**Input:** 32  
**Output:** 0

**Input:** 98.6  
**Output:** 37

**Input:** 212  
**Output:** 100

## Constraints
- The input temperature will be a floating-point number.
- You need to round the output to the nearest integer.

## Understand the Problem
To solve this problem, you need to understand the formula for converting Fahrenheit to Celsius:
Celsius = (Fahrenheit - 32) * 5/9

Breaking it down:
- Subtract 32 from the Fahrenheit temperature.
- Multiply the result by 5/9 to get the equivalent temperature in Celsius.

## Possible Approaches
1. **Direct Formula Application**: Apply the conversion formula directly to the input temperature.
2. **Use a Function**: Create a function that takes the Fahrenheit temperature as input and returns the Celsius equivalent.
3. **Round to Nearest Integer**: After applying the formula, round the result to the nearest integer.

## Plan the Approach
The most straightforward approach is to directly apply the formula and then round the result to the nearest integer. Here's a high-level plan:

1. Read the Fahrenheit temperature as input.
2. Apply the conversion formula: Celsius = (Fahrenheit - 32) * 5/9.
3. Round the result to the nearest integer.
4. Output the rounded Celsius temperature.

## Algorithm
1. Read `fahrenheit` as input.
2. Calculate `celsius` as `(fahrenheit - 32) * 5/9`.
3. Round `celsius` to the nearest integer.
4. Output `celsius` as the result.

## Pseudocode
```plaintext
1. Read fahrenheit as input
2. Set celsius = (fahrenheit - 32) * 5/9
3. Set roundedCelsius = Round(celsius)
4. Output roundedCelsius
```

## Test Cases
Let's test our solution with some example cases:

**Case 1:**
- Input: `32`
- Formula: `(32 - 32) * 5/9 = 0 * 5/9 = 0`
- Rounded to nearest integer: `0`
- Output should be `0`.

**Case 2:**
- Input: `98.6`
- Formula: `(98.6 - 32) * 5/9 ≈ 37`
- Rounded to nearest integer: `37`
- Output should be `37`.

**Case 3:**
- Input: `212`
- Formula: `(212 - 32) * 5/9 ≈ 100`
- Rounded to nearest integer: `100`
- Output should be `100`.

Remember to test edge cases like very high or very low Fahrenheit temperatures, as well as negative temperatures, to ensure your solution handles them correctly.

# Final Remarks
Before diving into the code, make sure you understand the problem and have a clear plan in mind. Try solving it on your own first, and if you get stuck, refer to the pseudocode and algorithm provided. Understanding the logic is crucial for effective coding. Happy coding!

Follow my GitHub Profile [SharifdotG](https://github.com/SharifdotG) for more coding challenges and solutions!