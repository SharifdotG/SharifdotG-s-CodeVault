# Here is the guideline for the problem:

## Understanding the problem

The problem is to write a C program that takes the length in centimeter as input and converts it into meter and kilometer. The conversion formulas for centimeter to meter and kilometer are:

* 1 centimeter = 0.01 meter
* 1 centimeter = 0.00001 kilometer

## Approaching the problem

The first step is to define the variables that will be used in the program. These variables are:

* `centimeter`: The length in centimeter
* `meter`: The length in meter
* `kilometer`: The length in kilometer

The next step is to prompt the user to enter the length in centimeter. This can be done using the `printf()` function.

```
printf("Enter the length in centimeter: ");
```

The next step is to read the length in centimeter from the user. This can be done using the `scanf()` function.

```
scanf("%d", &centimeter);
```

Once the length in centimeter has been read from the user, the next step is to convert it into meter and kilometer. This can be done using the following code:

```
meter = centimeter / 100.0;
kilometer = centimeter / 100000.0;
```

Finally, the length in meter and kilometer should be printed to the console. This can be done using the `printf()` function.

```
printf("The length in meter is: %f\n", meter);
printf("The length in kilometer is: %f\n", kilometer);
```

## Solving the problem

The complete code for the problem is shown below:

```c
#include <stdio.h>

int main() {

    int centimeter;
    float meter, kilometer;

    printf("Enter the length in centimeter: ");
    scanf("%d", &centimeter);

    meter = centimeter / 100.0;
    kilometer = centimeter / 100000.0;

    printf("The length in meter is: %f\n", meter);
    printf("The length in kilometer is: %f\n", kilometer);

    return 0;
}
```

## Further help

If you have any further questions about the problem, please feel free to comment in the repository. I will be happy to help.

## Conclusion

I hope this guideline is helpful. If you have any other questions, please let me know.