# CODE HINT - Read This Before You See The Code!

This problem asks you to write a program that counts the total number of notes in a given amount. For example, if the amount is 1234, then the program should print out 3 notes of 500, 1 note of 200, and 1 note of 34.

The problem can be solved using the following steps:

1. Get the amount from the user.
2. Initialize an array to store the number of notes of each denomination.
3. Iterate through the denominations, and for each denomination, divide the amount by the denomination and store the result in the array.
4. Print out the array.

Here is an algorithm for the problem:

```
def count_notes(amount):
  denominations = [500, 200, 100, 50, 20, 10, 5, 2, 1]
  notes = [0] * len(denominations)
  for i in range(len(denominations)):
    notes[i] = amount // denominations[i]
    amount -= notes[i] * denominations[i]
  return notes
```

Here is a pseudocode for the problem:

```
INPUT: amount
OUTPUT: array of notes

Initialize notes array to all 0s
For each denomination:
  Divide amount by denomination
  Store the result in the notes array
Print out the notes array
```

I hope this helps!