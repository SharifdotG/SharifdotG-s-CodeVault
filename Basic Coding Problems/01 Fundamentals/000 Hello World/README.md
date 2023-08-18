# CODE HINT - Read This Before You See The Code!

## Problem Description:
The task is to write a program that performs input and output operations for all basic data types in programming. This includes integers, floating-point numbers, characters, strings, and boolean values. The program should prompt the user to enter values of each data type and then display them back to the user. This exercise will help you become familiar with the various input/output functions available in programming languages and their usage.

## Example Input and Output:
**Example 1:**
```
Enter an integer: 42
Enter a floating-point number: 3.14
Enter a character: A
Enter a string: Hello, World!
Enter a boolean (True/False): True

--- Output ---
Integer: 42
Floating-point: 3.14
Character: A
String: Hello, World!
Boolean: True
```

## Constraints:
- The input values will be within the range supported by the respective data types in the chosen programming language.

## Step-by-Step Guide:

### Step 1: Understand the Problem:
To solve this problem, we need to create a program that takes user input for all basic data types and then displays the entered values. We'll use standard input/output functions to achieve this. Before writing the code, it's essential to understand each basic data type and the functions for input/output.

### Step 2: Plan the Approach:
We'll use a simple approach where we prompt the user to enter values for each data type one by one. Then, we'll read the input and store it in appropriate variables. Finally, we'll display the entered values using output functions.

### Step 3: Algorithm:
1. Prompt the user to enter an integer and read the input into a variable.
2. Prompt the user to enter a floating-point number and read the input into another variable.
3. Prompt the user to enter a character and read the input into a character variable.
4. Prompt the user to enter a string and read the input into a string variable.
5. Prompt the user to enter a boolean value (True/False) and read the input into a boolean variable.
6. Display the entered values using output functions.

### Step 4: Pseudocode:
```
Prompt for an integer input
Read the input as an integer and store it in 'integerVar'

Prompt for a floating-point input
Read the input as a floating-point number and store it in 'floatVar'

Prompt for a character input
Read the input as a character and store it in 'charVar'

Prompt for a string input
Read the input as a string and store it in 'stringVar'

Prompt for a boolean input
Read the input as a boolean and store it in 'boolVar'

Display 'integerVar', 'floatVar', 'charVar', 'stringVar', and 'boolVar'
```

### Step 5: Test Cases:
**Test Case 1:**
```
Enter an integer: 100
Enter a floating-point number: 3.14159
Enter a character: Z
Enter a string: Testing Inputs and Outputs
Enter a boolean (True/False): False

--- Output ---
Integer: 100
Floating-point: 3.14159
Character: Z
String: Testing Inputs and Outputs
Boolean: False
```

**Test Case 2:**
```
Enter an integer: -42
Enter a floating-point number: 2.71828
Enter a character: X
Enter a string: Hello
Enter a boolean (True/False): True

--- Output ---
Integer: -42
Floating-point: 2.71828
Character: X
String: Hello
Boolean: True
```

## Hints:
- When reading input for each data type, use the appropriate input function based on the programming language you are using (e.g., `scanf` in C, `input` in Python, `cin` in C++, `Scanner` in Java, etc.).
- Don't forget to import any necessary libraries or headers depending on the chosen programming language.
- For displaying the output, use the appropriate output function or statement (e.g., `printf` in C, `print` in Python, `cout` in C++, `System.out.println` in Java, etc.).
- Ensure that the input and output statements are clear and user-friendly to make the program more interactive.
- Test your program with different data inputs to ensure it handles various scenarios correctly.

## Final Remarks:
This coding challenge is an excellent opportunity to practice working with basic data types and input/output operations. Before checking the provided code, try to solve the problem on your own. Understanding the logic and algorithms behind the solution is essential for becoming a proficient programmer. Once you have given it your best shot, you can refer to the code to see a possible implementation. Happy coding!