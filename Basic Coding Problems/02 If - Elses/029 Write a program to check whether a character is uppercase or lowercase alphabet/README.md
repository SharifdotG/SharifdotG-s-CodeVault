# CODE HINT - Read This Before You See The Code!

This problem asks you to write a program that checks whether a character is uppercase or lowercase alphabet.

The ASCII values of uppercase alphabets range from 65 to 90, and the ASCII values of lowercase alphabets range from 97 to 122.

To check whether a character is uppercase or lowercase, you can use the following algorithm:

1. Get the ASCII value of the character.
2. If the ASCII value is between 65 and 90, then the character is uppercase.
3. If the ASCII value is between 97 and 122, then the character is lowercase.
4. Otherwise, the character is not an alphabet.

Here is an example of pseudocode for the problem:

```
def is_uppercase(char):
 ascii_value = ord(char)
 if ascii_value >= 65 and ascii_value <= 90:
  return True
 else:
  return False

def is_lowercase(char):
 ascii_value = ord(char)
 if ascii_value >= 97 and ascii_value <= 122:
  return True
 else:
  return False
```

Once you have written the algorithm, you can implement it in any programming language of your choice.

I hope this code hint helps you solve the problem!