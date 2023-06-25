# Here is the guideline for the problem:

**Understanding the problem**

The problem is to write a C program that enters the radius of a circle and finds its diameter, circumference, and area. The diameter is the distance across the circle through the center, the circumference is the distance around the circle, and the area is the amount of space enclosed by the circle.

**Approaching the problem**

The first step is to define the variables that will be used in the program. These variables will store the radius, diameter, circumference, and area of the circle. The next step is to prompt the user to enter the radius of the circle. The radius will be read from the user using the `scanf()` function. The diameter, circumference, and area of the circle can then be calculated using the following formulas:

```
diameter = 2 * radius
circumference = 2 * pi * radius
area = pi * radius * radius
```

The final step is to print the diameter, circumference, and area of the circle. This can be done using the `printf()` function.

**Solving the problem**

The code below solves the problem:

```c
#include <stdio.h>

int main() {

  int radius;
  float diameter, circumference, area;

  printf("Enter the radius of the circle: ");
  scanf("%d", &radius);

  diameter = 2 * radius;
  circumference = 2 * 3.14 * radius;
  area = 3.14 * radius * radius;

  printf("The diameter of the circle is: %f\n", diameter);
  printf("The circumference of the circle is: %f\n", circumference);
  printf("The area of the circle is: %f\n", area);

  return 0;
}
```

**Questions**

If you have any questions about the problem or the code, please feel free to comment in the repository. I will be happy to help.

Thank you for your time!
