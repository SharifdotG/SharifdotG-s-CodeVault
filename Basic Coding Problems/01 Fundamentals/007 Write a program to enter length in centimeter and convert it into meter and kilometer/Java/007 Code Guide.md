# Here is the Code Guide for the Java program to convert centimeter to meter and kilometer:

**The Problem**

The problem is to write a program that can enter a length in centimeters and convert it into meters and kilometers. The program should also display the results on the console.

**Code Explanation**

The code for the program is as follows:

```java
import java.util.Scanner;

public class centimeter_to_meter_kilometer {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the length in centimeter: ");
        int lengthInCentimeter = scanner.nextInt();

        float lengthInMeters = lengthInCentimeter / 100.0F;
        float lengthInKilometers = lengthInCentimeter / 100000.0F;

        System.out.printf("The length in meter is: %.2f\n", lengthInMeters);
        System.out.printf("The length in kilometer is: %.2f\n", lengthInKilometers);
    }
}
```

The code first imports the `java.util.Scanner` class, which is used to read input from the console. Then, the `main()` method is called. The `main()` method first creates a `Scanner` object and then prompts the user to enter the length in centimeters. The length in centimeters is then stored in the `lengthInCentimeter` variable.

The next step is to convert the length in centimeters to meters and kilometers. The conversion is done by dividing the length in centimeters by 100.0F for meters and by 100000.0F for kilometers. The results are then stored in the `lengthInMeters` and `lengthInKilometers` variables.

Finally, the results are displayed on the console. The `printf()` method is used to format the output and to display two decimal places.

**Conclusion**

This Code Guide has explained the problem and the code for the Java program to convert centimeter to meter and kilometer. The code is highly detailed and concise, so that everyone can understand it without any issues. If you have any queries, please feel free to comment in the repository.

I hope this helps! Let me know if you have any other questions.