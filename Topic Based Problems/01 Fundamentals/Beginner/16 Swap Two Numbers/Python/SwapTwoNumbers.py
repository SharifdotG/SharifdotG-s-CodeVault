"""
SwapTwoNumbers.py
Author: SharifdotG (sharifmdyousuf007@gmail.com)
Swap Two Numbers in Python using arithmetic operator
Version: 1.0
Date: 2023-09-24
Copyright (c) 2023
"""

firstNumber = int(input("Enter first number: "))
secondNumber = int(input("Enter second number: "))

print("Before swapping:")
print("First number:", firstNumber)
print("Second number:", secondNumber)

firstNumber = firstNumber + secondNumber
secondNumber = firstNumber - secondNumber
firstNumber = firstNumber - secondNumber

print("After swapping:")
print("First number:", firstNumber)
print("Second number:", secondNumber)
