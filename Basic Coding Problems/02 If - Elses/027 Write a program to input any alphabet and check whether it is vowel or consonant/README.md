# CODE HINT - Read This Before You See The Code!

This problem asks you to write a program that can check whether a given alphabet is a vowel or a consonant.

A vowel is a letter that makes a sound when spoken. The five vowels in the English alphabet are a, e, i, o, and u. All other letters in the alphabet are consonants.

To solve this problem, you can use the following steps:

1. Get the alphabet from the user.
2. Check if the alphabet is a vowel.
3. If the alphabet is a vowel, print "vowel".
4. Otherwise, print "consonant".

Here is an algorithm for the problem:

```
1. Get the alphabet from the user.
2. Check if the alphabet is a vowel.
    * If the alphabet is a lowercase vowel, return true.
    * If the alphabet is an uppercase vowel, return true.
    * Otherwise, return false.
3. If the alphabet is a vowel, print "vowel".
4. Otherwise, print "consonant".
```

Here is a pseudocode for the problem:

```
def is_vowel(alphabet):
    if alphabet in ["a", "e", "i", "o", "u"]:
        return True
    elif alphabet in ["A", "E", "I", "O", "U"]:
        return True
    else:
        return False

def main():
    alphabet = input("Enter an alphabet: ")
    if is_vowel(alphabet):
        print("vowel")
    else:
        print("consonant")

if __name__ == "__main__":
    main()
```

I hope this helps!