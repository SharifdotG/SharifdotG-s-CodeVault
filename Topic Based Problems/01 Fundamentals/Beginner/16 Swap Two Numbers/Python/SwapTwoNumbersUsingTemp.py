# SwapTwoNumbersUsingTemp.py
# Swap two numbers in Python using temp variable
# Version: 1.0
# Date: 2023-09-24
# Author: SharifdotG (sharifmdyousuf007@gmail.com)

firstNumber = int(input("Enter first number: "))
secondNumber = int(input("Enter second number: "))

print("Before swapping:")
print("First number:", firstNumber)
print("Second number:", secondNumber)

firstNumber, secondNumber = secondNumber, firstNumber

print("After swapping:")
print("First number:", firstNumber)
print("Second number:", secondNumber)
