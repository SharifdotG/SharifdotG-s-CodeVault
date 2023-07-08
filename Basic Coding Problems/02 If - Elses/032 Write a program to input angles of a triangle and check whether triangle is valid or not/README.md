# CODE HINT - Read This Before You See The Code!

This problem asks you to write a program that will input the angles of a triangle and check whether the triangle is valid. A triangle is valid if the sum of all three angles is equal to 180 degrees.

To solve this problem, you can use the following steps:

1. Read the three angles of the triangle from the user.
2. Calculate the sum of the three angles.
3. If the sum of the angles is equal to 180 degrees, then the triangle is valid. Otherwise, the triangle is invalid.

Here is an algorithm for the problem:

```
1. Read the three angles of the triangle from the user.
2. Calculate the sum of the three angles.
3. If the sum of the angles is equal to 180 degrees, then print "The triangle is valid." Otherwise, print "The triangle is invalid."
```

Here is a pseudocode for the problem:

```
def is_triangle_valid(angle_1, angle_2, angle_3):
  sum_of_angles = angle_1 + angle_2 + angle_3
  if sum_of_angles == 180:
    return True
  else:
    return False

if __name__ == "__main__":
  angle_1 = float(input("Enter the first angle: "))
  angle_2 = float(input("Enter the second angle: "))
  angle_3 = float(input("Enter the third angle: "))

  if is_triangle_valid(angle_1, angle_2, angle_3):
    print("The triangle is valid.")
  else:
    print("The triangle is invalid.")
```

I hope this code hint helps you solve the problem!