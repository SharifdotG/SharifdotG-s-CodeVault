# Here is the code guide for the program to convert Celsius to Fahrenheit:

**The Problem**

The problem is to write a program that enters a temperature in Celsius and converts it into Fahrenheit. The formula for converting Celsius to Fahrenheit is:

```c
Fahrenheit = (Celsius * 9 / 5) + 32
```

**Code Explanation**

The code for the program is as follows:

```c
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
```

The first line, `#include <stdio.h>`, tells the compiler to include the `stdio.h` header file, which contains the definitions for the `printf()` and `scanf()` functions.

The next two lines, `float celsius, fahrenheit;`, declare two variables, `celsius` and `fahrenheit`, to store the temperature in Celsius and Fahrenheit, respectively.

The next line, `printf("Enter temperature in Celsius: ");`, prints a prompt to the user to enter the temperature in Celsius.

The next line, `scanf("%f", &celsius);`, reads the user's input and stores it in the `celsius` variable.

The next line, `fahrenheit = (celsius * 9 / 5) + 32;`, calculates the temperature in Fahrenheit and stores it in the `fahrenheit` variable.

The next line, `printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);`, prints the temperature in Fahrenheit to the console.

The last line, `return 0;`, returns the value 0 to the operating system, indicating that the program has terminated successfully.

**Conclusion**

This code guide has explained the problem and the code for the program to convert Celsius to Fahrenheit. If you have any questions, please feel free to comment in the repository.

Thank you for reading!