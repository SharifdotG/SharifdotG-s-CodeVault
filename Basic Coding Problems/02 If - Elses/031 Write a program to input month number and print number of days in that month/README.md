# CODE HINT - Read This Before You See The Code!

This problem asks you to write a program that takes a month number as input and prints the number of days in that month. The month number can be any integer from 1 to 12.

To solve this problem, you can use the following steps:

1. Get the month number from the user.
2. Check if the month number is valid. A valid month number is an integer from 1 to 12.
3. If the month number is valid, then use the following table to determine the number of days in that month:

Month | Number of days
------- | --------
January | 31
February | 28 (or 29 in a leap year)
March | 31
April | 30
May | 31
June | 30
July | 31
August | 31
September | 30
October | 31
November | 30
December | 31

4. Print the number of days in the month.

Here is an algorithm for the problem:

```
1. Get the month number from the user.
2. If the month number is not valid, then print an error message.
3. Otherwise, use the table to determine the number of days in the month.
4. Print the number of days in the month.
```

Here is a pseudocode for the problem:

```
procedure print_number_of_days_in_month(month_number)
  if month_number < 1 or month_number > 12 then
    print("Invalid month number")
  else
    num_days = 31
    if month_number = 2 then
      num_days = 28
      if is_leap_year() then
        num_days = 29
    end if
    print(num_days)
  end if
end procedure
```

I hope this code hint helps you solve the problem!