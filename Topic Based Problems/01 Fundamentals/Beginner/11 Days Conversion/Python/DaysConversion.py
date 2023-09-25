# DaysConversion.py
"""
@brief Days Conversion in Python
@version 1.0
@date 2023-09-24
"""

days = int(input("Enter days: "))

print("Years:", days // 365)
print("Remaining Months:", (days % 365) // 30)
print("Remaining Weeks:", ((days % 365) % 30) // 7)
print("Remaining Days:", ((days % 365) % 30) % 7)
