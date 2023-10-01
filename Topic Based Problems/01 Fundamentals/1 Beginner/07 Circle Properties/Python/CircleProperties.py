# CircleProperties.py
"""
@file CircleProperties.py
@author SharifdotG (sharifmdyousuf007@gmail.com)
@brief Circle Properties in Python
@version 1.0
@date 2023-09-24
"""

import math

radius = float(input("Enter radius: "))
print("Diameter of circle is:", 2 * radius)
print("Circumference of circle is:", 2 * math.pi * radius)
print("Area of circle is:", math.pi * radius ** 2)
