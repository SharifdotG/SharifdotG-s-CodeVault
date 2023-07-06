# CODE HINT - Read This Before You See The Code!

This problem asks you to write a program that checks whether a number is divisible by both 5 and 11. To do this, you will need to use the modulo operator (%) to find the remainder of the number when divided by 5 and 11. If the remainder is 0 for both 5 and 11, then the number is divisible by both numbers. Otherwise, the number is not divisible by both numbers.

Here is an algorithm for solving this problem:

1. Get the number from the user.
2. Calculate the remainder of the number when divided by 5.
3. Calculate the remainder of the number when divided by 11.
4. If both remainders are 0, then the number is divisible by both 5 and 11. Otherwise, the number is not divisible by both numbers.

Here is a pseudocode for solving this problem:

```
procedure checkDivisibility(number)
  remainder5 := number % 5
  remainder11 := number % 11
  if remainder5 = 0 and remainder11 = 0 then
    print("The number is divisible by 5 and 11.")
  else
    print("The number is not divisible by 5 and 11.")
end procedure
```

I hope this Code Hint helps you solve the problem without seeing the code!