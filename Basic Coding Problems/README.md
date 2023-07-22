# 282A. Bit++

## Problem Statement

The classic programming language of Bitland is Bit++. This language is so peculiar and complicated.

* The language has exactly one variable, called `x`.
* There are two operations:
    * `++` increases the value of `x` by 1.
    * `--` decreases the value of `x` by 1.
* A statement in Bit++ is a sequence, consisting of exactly one operation and one variable `x`. The statement is written without spaces, that is, it can only contain characters `+`, `-`, and `X`. Executing a statement means applying the operation it contains.
* A program in Bit++ is a sequence of statements, each of them needs to be executed. Executing a program means executing all the statements it contains.

You are given a program in language Bit++. The initial value of `x` is 0. Execute the program and find its final value (the value of the variable when the program is executed).

## Input

The first line contains a single integer `n` (`1 ≤ n ≤ 150`) — the number of statements in the program.

Next `n` lines contain a statement each. Each statement contains exactly one operation `++` or `--` and exactly one variable `x` (denoted as letter «X»). Thus, there are no empty statements. The operation and the variable can be written in any order.

## Output

Print a single integer — the final value of `x`.

## Examples

```
input
1
++X
output
1
```

```
input
2
X++
--X
output
0
```

```
input
3
++X
X--
--X
output
-1
```

## Solution

The solution to this problem is to simply iterate through the statements in the program and apply the corresponding operation to the variable `x`. The final value of `x` will be the value of the variable after all the statements have been executed.

Here is an implementation of the solution in Python:

```python
def solve(n):
    x = 0
    for i in range(n):
        statement = input()
        if statement[0] == "+":
            x += 1
        elif statement[0] == "-":
            x -= 1
    return x

print(solve(int(input())))
```

This solution can be easily modified to work in other programming languages as well.