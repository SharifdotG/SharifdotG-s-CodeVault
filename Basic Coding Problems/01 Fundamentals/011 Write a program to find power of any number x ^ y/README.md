# CODE HINT - Read This Before You See The Code!

**Problem:** 

Write a program to find power of any number x^y.

**General Information:**

* The power of a number is the number multiplied by itself repeatedly. For example, 5^3 = 5 * 5 * 5 = 125.
* In this problem, you will need to write a program that takes two numbers as input: the base number x and the exponent y. The program should then calculate and print the value of x^y.

**Tips and Tricks:**

* There are a few different ways to solve this problem. One way is to use a for loop to repeatedly multiply the base number by itself y times. Another way is to use the pow() function, which is a built-in function in many programming languages.
* If you are using a for loop, you will need to initialize a variable to store the result of the calculation. You will then need to iterate through the loop, multiplying the result by the base number each time.
* If you are using the pow() function, you will need to pass in the base number and the exponent as arguments. The pow() function will then return the value of x^y.

**Algorithm:**


1. Initialize a variable to store the result of the calculation.
2. Iterate through the loop, multiplying the result by the base number each time.
3. Once the loop has finished iterating, print the value of the result.


**Pseudocode:**

```
procedure power(x, y)
  result := 1
  for i := 1 to y
    result := result * x
  end for
  print result
end procedure
```

I hope this Code Hint helps you solve the problem!