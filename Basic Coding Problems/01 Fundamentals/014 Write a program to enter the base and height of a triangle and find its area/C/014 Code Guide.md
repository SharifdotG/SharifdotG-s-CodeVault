# Here is the guideline for the problem:

## Understanding the problem

The problem is to write a C program that enters the base and height of a triangle and finds its area. The area of a triangle is calculated as:

```
area = (1/2) * base * height
```

where base is the length of the base of the triangle and height is the length of the altitude from the opposite vertex to the base.

## Approaching the problem

The first step is to define the variables that will be used in the program. These variables are:

* `base`: The length of the base of the triangle.
* `height`: The length of the altitude from the opposite vertex to the base.
* `area`: The area of the triangle.

The next step is to prompt the user to enter the base and height of the triangle. This can be done using the `printf()` and `scanf()` functions.

```
printf("Enter the base of the triangle: ");
scanf("%f", &base);

printf("Enter the height of the triangle: ");
scanf("%f", &height);
```

Once the base and height of the triangle have been entered, the area can be calculated using the following code:

```
area = 0.5 * base * height;
```

Finally, the area can be printed to the console using the `printf()` function.

```
printf("The area of the triangle is: %f\n", area);
```

## Solving the problem

The complete code for the problem is shown below.

```c
#include <stdio.h>

int main() {

  float base, height, area;

  printf("Enter the base of the triangle: ");
  scanf("%f", &base);

  printf("Enter the height of the triangle: ");
  scanf("%f", &height);

  area = 0.5 * base * height;

  printf("The area of the triangle is: %f\n", area);

  return 0;
}
```

## Further help

If you have any questions about the problem or the code, please feel free to comment in the repository.

I hope this helps!