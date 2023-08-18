# Code Guide

## Problem: Basic I/O

### Introduction

Welcome to SharifdotG's CodeVault! This repository aims to provide a comprehensive collection of code examples and guides to help fellow learners understand programming concepts better. In this guide, we'll be addressing the "Basic I/O" problem, focusing on user input and output in Python.

### Problem Description

The "Basic I/O" problem involves taking user input for their name, age, height, and student status. The goal is to process this information and present it in a structured format. Here are the specifications:

**Inputs:**
- User's name (string)
- User's age (integer)
- User's height (float, in meters)
- Whether the user is a student (yes/no)

**Output:**
- Formatted user information including name, age, height, and student status.

### About the Problem

User input and output are fundamental concepts in programming. This problem mimics real-life scenarios where an application or program needs to gather information from a user and present it in a readable manner. This interaction is commonly seen in registration forms, surveys, and data collection systems.

### Approach

To solve the "Basic I/O" problem, I employed a straightforward approach using Python's built-in `input()` function for taking user input and then formatting and printing the collected data.

### Code Walkthrough

Let's dive into the code step-by-step:

```python
name = input("Enter your name: ")
age = int(input("Enter your age: "))
height = float(input("Enter your height (in meters): "))
is_student = input("Are you a student? (yes/no): ").lower() == "yes"

print("\n--- User Information ---")
print("Name:", name)
print("Age:", age)
print("Height:", height, "m")
print("Is Student:", is_student)
```

1. I use the `input()` function to prompt the user for their name, age, height, and student status.
2. For the age and height, I use `int()` and `float()` functions, respectively, to convert the input strings into appropriate data types.
3. I convert the "yes" or "no" response for student status into a boolean value using `.lower()` and a comparison.
4. Finally, I print out the formatted user information.

### Complexity Analysis

The time complexity of this solution is O(1) since it takes a constant number of steps to collect and print the user information. The space complexity is also O(1) as only a few variables are used to store the input data.

### Examples

Let's consider an example:

**Input:**
```
Enter your name: John Doe
Enter your age: 25
Enter your height (in meters): 1.75
Are you a student? (yes/no): yes
```

**Output:**
```
--- User Information ---
Name: John Doe
Age: 25
Height: 1.75 m
Is Student: True
```

### Test Cases

Here are a few test cases to validate the code:

1. Input: John, 30, 1.80, yes
   Output: Name: John, Age: 30, Height: 1.8 m, Is Student: True

2. Input: Jane, 22, 1.65, no
   Output: Name: Jane, Age: 22, Height: 1.65 m, Is Student: False

### Troubleshooting

If you encounter any issues while running the code, ensure that you are using a compatible Python version and that you follow the input prompts accurately.

### Related Resources

To deepen your understanding of user input and output in Python, consider exploring the official Python documentation on [input and output](https://docs.python.org/3/tutorial/inputoutput.html).

### Conclusion

Congratulations! You've successfully learned how to take user input and display formatted output in Python. Feel free to explore more code examples and guides in SharifdotG's CodeVault on [GitHub](https://github.com/SharifdotG). Happy coding and keep learning!