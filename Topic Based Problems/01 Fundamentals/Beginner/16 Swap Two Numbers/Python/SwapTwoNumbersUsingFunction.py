"""
File: SwapTwoNumbersUsingFunction.py
Author: SharifdotG (sharifmdyousuf007@gmail.com)
Description: Swap Two Numbers in Python without using functions
Version: 1.0
Date: 2023-09-24
"""

first_number = int(input("Enter first number: "))
second_number = int(input("Enter second number: "))

print("Before swapping: ")
print("First number:", first_number)
print("Second number:", second_number)

first_number, second_number = second_number, first_number

print("After swapping: ")
print("First number:", first_number)
print("Second number:", second_number)
