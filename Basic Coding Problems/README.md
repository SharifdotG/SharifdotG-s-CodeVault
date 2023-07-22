Sure, here is the converted codeforces problem text in a way you can implement it in README.md in GitHub:


# 158A. Next Round

## Problem

A total of `n` participants took part in the contest (`$n \ge k$`), and you already know their scores. Calculate how many participants will advance to the next round.

## Input

The first line of the input contains two integers `n` and `k` (`$1 \le k \le n \le 50$`) separated by a single space.

The second line contains `n` space-separated integers `a_1, a_2, \dots, a_n` (`$0 \le a_i \le 100$`), where `a_i` is the score earned by the participant who got the `i`-th place. The given sequence is non-increasing (that is, for all `i` from 1 to `n - 1` the following condition is fulfilled: `a_i \ge a_{i + 1}`).

## Output

Output the number of participants who advance to the next round.

## Examples

```
input
8 5
10 9 8 7 7 7 5 5
output
6
```

```
input
4 2
0 0 0 0
output
0
```

## Note

In the first example the participant on the 5th place earned 7 points. As the participant on the 6th place also earned 7 points, there are 6 advancers.

In the second example nobody got a positive score.