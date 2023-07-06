# CODE HINT - Read This Before You See The Code!

This problem asks you to write a program that checks whether a year is a leap year or not. A leap year is a year that has 29 days in February. There are two conditions for a year to be a leap year:

1. The year is divisible by 4.
2. The year is divisible by 400, but not by 100.

For example, the years 2000, 2004, and 2008 are leap years, but the years 1900, 2100, and 2200 are not leap years.

To solve this problem, you can use the following algorithm:

1. Get the year from the user.
2. Check if the year is divisible by 4.
3. If the year is divisible by 4, then check if it is divisible by 100.
4. If the year is divisible by 100, then check if it is divisible by 400.
5. If the year is divisible by 400, then the year is a leap year. Otherwise, the year is not a leap year.

Here is a pseudocode for the algorithm:

```
def is_leap_year(year):
  """Returns True if the year is a leap year, False otherwise."""

  if year % 4 == 0:
    if year % 100 == 0:
      if year % 400 == 0:
        return True
    else:
      return True
  else:
    return False
```

I hope this helps!