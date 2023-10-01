"""
File: CalculateBMI.py
Author: SharifdotG (sharifmdyousuf007@gmail.com)
Brief: Calculate BMI in Python
Version: 1.0
Date: 2023-09-23
"""

weight, height = map(float, input().split())

bmi = weight / (height * height)

print(bmi)
