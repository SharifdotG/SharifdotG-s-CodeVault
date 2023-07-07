# Here is the code guide for the problem "Write a program to input any alphabet and check whether it is vowel or consonant."

**Problem**

The problem is to write a program that takes an alphabet as input and prints whether it is a vowel or a consonant.

**Code Explanation**

The code for this problem is as follows:

```java
import java.util.Scanner;

public class vowel_consonant {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter any alphabet: ");
        char letter = scanner.next().charAt(0);

        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
            System.out.println("The alphabet is a vowel.");
        } else {
            System.out.println("The alphabet is a consonant.");
        }
    }
}
```

The first line imports the `Scanner` class, which is used to read input from the user.

The next line declares a `Scanner` object called `scanner`.

The next line prints a message to the user asking them to enter an alphabet.

The next line uses the `next()` method of the `scanner` object to read a character from the user.

The next line checks if the character entered by the user is a vowel. A vowel is any of the characters `a`, `e`, `i`, `o`, or `u`, either in lowercase or uppercase.

If the character is a vowel, the `System.out.println()` method is used to print the message "The alphabet is a vowel."

Otherwise, the `System.out.println()` method is used to print the message "The alphabet is a consonant."

The last line is the end of the program.

**Conclusion**

This code guide has explained the problem "Write a program to input any alphabet and check whether it is vowel or consonant" and the code for this problem. If you have any questions, please feel free to comment in the repository.