number = int(input())

thousands = number // 1000
hundreds = (number % 1000) // 100
tens = (number % 100) // 10
units = number % 10

roman_number = ""

if thousands > 0:
    roman_number += "M" * thousands
    
if hundreds > 0:
    if hundreds == 9:
        roman_number += "CM"
    elif hundreds == 4:
        roman_number += "CD"
    elif hundreds >= 5:
        roman_number += "D" + "C" * (hundreds - 5)
    else:
        roman_number += "C" * hundreds
        
if tens > 0:
    if tens == 9:
        roman_number += "XC"
    elif tens == 4:
        roman_number += "XL"
    elif tens >= 5:
        roman_number += "L" + "X" * (tens - 5)
    else:
        roman_number += "X" * tens
        
if units > 0:
    if units == 9:
        roman_number += "IX"
    elif units == 4:
        roman_number += "IV"
    elif units >= 5:
        roman_number += "V" + "I" * (units - 5)
    else:
        roman_number += "I" * units

print(roman_number)
