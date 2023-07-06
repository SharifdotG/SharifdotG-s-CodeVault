# CODE HINT - Read This Before You See The Code!

This problem asks you to write a program that converts a number of days into years, weeks and days. The basic idea is to divide the number of days by 365, the number of days in a year. The quotient of this division will be the number of years, and the remainder will be the number of days that are left over. You can then divide the remainder by 7, the number of days in a week, to get the number of weeks. The remainder of this division will be the number of days that are left over.

Here is an algorithm for solving this problem:

1. Declare variables to store the number of days, years, weeks and days.
2. Read the number of days from the user.
3. Calculate the number of years, weeks and days.
4. Print the number of years, weeks and days.

Here is a pseudocode for solving this problem:

```
procedure convert_days_to_years_weeks_and_days(number_of_days)
  years := number_of_days / 365
  weeks := (number_of_days % 365) / 7
  days := (number_of_days % 365) % 7
  print(years, weeks, days)
end procedure
```

I hope this Code Hint helps you solve the problem!