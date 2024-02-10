# CODE HINT - Read This Before You See The Code!

## Problem Description

You are tasked with converting temperatures from Celsius to Fahrenheit. This is a common problem in many fields, including meteorology and everyday weather apps. Given a temperature in Celsius, you need to convert it to Fahrenheit using the following formula:

**Fahrenheit = (Celsius * 9/5) + 32**

Your task is to create a program or function that takes a temperature in Celsius as input and returns the equivalent temperature in Fahrenheit.

## Example Input and Output

**Example 1:**
- Input: 0°C
- Output: 32°F

**Example 2:**
- Input: 25°C
- Output: 77°F

**Example 3:**
- Input: -10°C
- Output: 14°F

## Constraints

- The input temperature is a floating-point number representing degrees Celsius.
- You need to return the temperature in Fahrenheit as a floating-point number.
- Temperature values can be negative.

## Understand the Problem

Before diving into the code, let's understand the problem thoroughly.

1. You're given a temperature in Celsius.
2. You need to convert it to Fahrenheit.
3. You have a formula to do this conversion.

## Possible Approaches

There's really only one straightforward way to solve this problem:

1. Use the given formula to calculate the temperature in Fahrenheit.

## Plan the Approach

Now that we know there's only one approach let's plan it out.

1. Accept the temperature in Celsius as input.
2. Use the formula **Fahrenheit = (Celsius * 9/5) + 32** to calculate the temperature in Fahrenheit.
3. Return the calculated Fahrenheit temperature.

## Algorithm

Here's a more detailed algorithm:

1. Accept a floating-point number representing the temperature in Celsius as input.
2. Calculate the temperature in Fahrenheit using the formula: Fahrenheit = (Celsius * 9/5) + 32
3. Return the calculated Fahrenheit temperature as a floating-point number.

## Pseudocode

```plaintext
function celsiusToFahrenheit(celsius):
    fahrenheit = (celsius * 9/5) + 32
    return fahrenheit
```

## Test Cases

Test your solution with a variety of test cases to ensure it works correctly:

**Test Case 1:**
- Input: 0°C
- Expected Output: 32°F

**Test Case 2:**
- Input: 25°C
- Expected Output: 77°F

**Test Case 3:**
- Input: -10°C
- Expected Output: 14°F

**Test Case 4:**
- Input: 100°C
- Expected Output: 212°F

**Test Case 5:**
- Input: 37.5°C
- Expected Output: 99.5°F

**Test Case 6:**
- Input: -40°C
- Expected Output: -40°F

## Additional Guidance

Before you jump into writing code, remember that understanding the problem and the approach is crucial. Try to solve the problem on paper or in your head before coding. It will help you write code more efficiently.

Feel free to use the provided pseudocode as a starting point for your code.

Finally, for more coding practice, visit [Sharif's GitHub Profile](https://github.com/SharifdotG).

# Final Remarks

Solving problems like these is a great way to practice your coding skills. Remember to understand the problem, plan your approach, and test your solution thoroughly. Once you're confident, go ahead and implement the code!