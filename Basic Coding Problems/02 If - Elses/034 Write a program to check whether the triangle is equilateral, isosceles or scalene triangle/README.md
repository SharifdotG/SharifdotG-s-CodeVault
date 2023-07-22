# CODE HINT - Read This Before You See The Code!

This problem asks you to write a program to check whether a triangle is equilateral, isosceles, or scalene triangle.

An equilateral triangle is a triangle in which all three sides are equal. An isosceles triangle is a triangle in which two sides are equal. A scalene triangle is a triangle in which no sides are equal.

To solve this problem, you can use the following steps:

1. Define three variables to store the lengths of the three sides of the triangle.
2. Write a conditional statement to check if all three sides of the triangle are equal. If they are, then the triangle is equilateral. Otherwise, continue to the next step.
3. Write a conditional statement to check if any two sides of the triangle are equal. If they are, then the triangle is isosceles. Otherwise, the triangle is scalene.
4. Print a message to indicate the type of triangle.

Here is an algorithm for the problem:

```
1. Input the lengths of the three sides of the triangle.
2. Check if all three sides are equal. If they are, then the triangle is equilateral. Otherwise, continue to the next step.
3. Check if any two sides of the triangle are equal. If they are, then the triangle is isosceles. Otherwise, the triangle is scalene.
4. Print a message to indicate the type of triangle.
```

Here is a pseudocode for the problem:

```
def check_triangle_type(a, b, c):
  if a == b == c:
    return "equilateral"
  elif a == b or b == c or c == a:
    return "isosceles"
  else:
    return "scalene"

if __name__ == "__main__":
  a = int(input("Enter the length of side a: "))
  b = int(input("Enter the length of side b: "))
  c = int(input("Enter the length of side c: "))
  print(check_triangle_type(a, b, c))
```

I hope this code hint helps you solve the problem!