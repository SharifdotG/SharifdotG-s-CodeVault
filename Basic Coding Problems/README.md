# Problem - 1850H - Codeforces
In order to win his toughest battle, Mircea came up with a great strategy for his army. He has $$$n$$$ soldiers and decided to arrange them in a certain way in camps. Each soldier has to belong to exactly one camp, and there is one camp at each integer point on the $$$x$$$-axis (at points $$$\\cdots, -2, -1, 0, 1, 2, \\cdots$$$).

The strategy consists of $$$m$$$ conditions. Condition $$$i$$$ tells that soldier $$$a\_i$$$ should belong to a camp that is situated $$$d\_i$$$ meters in front of the camp that person $$$b\_i$$$ belongs to. (If $$$d\_i < 0$$$, then $$$a\_i$$$'s camp should be $$$-d\_i$$$ meters behind $$$b\_i$$$'s camp.)

Now, Mircea wonders if there exists a partition of soldiers that respects the condition and he asks for your help! Answer "YES" if there is a partition of the $$$n$$$ soldiers that satisfies all of the $$$m$$$ conditions and "NO" otherwise.

Note that two different soldiers may be placed in the same camp.

Input

The first line contains a single integer $$$t$$$ ($$$1 \\leq t \\leq 100$$$) — the number of test cases.

The first line of each test case contains two positive integers $$$n$$$ and $$$m$$$ ($$$2 \\leq n \\leq 2 \\cdot 10^5$$$; $$$1 \\leq m \\leq n$$$) — the number of soldiers, and the number of conditions respectively.

Then $$$m$$$ lines follow, each of them containing $$$3$$$ integers: $$$a\_i$$$, $$$b\_i$$$, $$$d\_i$$$ ($$$a\_i \\neq b\_i$$$; $$$1 \\leq a\_i, b\_i \\leq n$$$; $$$-10^9 \\leq d\_i \\leq 10^9$$$) — denoting the conditions explained in the statement. Note that if $$$d\_i$$$ is positive, $$$a\_i$$$ should be $$$d\_i$$$ meters in front of $$$b\_i$$$ and if it is negative, $$$a\_i$$$ should be $$$-d\_i$$$ meters behind $$$b\_i$$$.

Note that the sum of $$$n$$$ over all test cases doesn't exceed $$$2 \\cdot 10^5$$$.

Output

For each test case, output "YES" if there is an arrangement of the $$$n$$$ soldiers that satisfies all of the $$$m$$$ conditions and "NO" otherwise.

Example

Input

```

4
5 3
1 2 2
2 3 4
4 2 -6
6 5
1 2 2
2 3 4
4 2 -6
5 4 4
3 5 100
2 2
1 2 5
1 2 4
4 1
1 2 3
```


Note

For the first test case, we can partition the soldiers into camps in the following way: soldier:

*   Soldier $$$1$$$ in the camp with the coordinate $$$x = 3$$$.
*   Soldier $$$2$$$ in the camp with the coordinate $$$x = 5$$$.
*   Soldier $$$3$$$ in the camp with the coordinate $$$x = 9$$$.
*   Soldier $$$4$$$ in the camp with the coordinate $$$x = 11$$$.

For the second test case, there is no partition that can satisfy all the constraints at the same time.

For the third test case, there is no partition that satisfies all the constraints since we get contradictory information about the same pair.

For the fourth test case, in order to satisfy the only condition, a possible partition is:

*   Soldier $$$1$$$ in the camp with the coordinate $$$x = 10$$$.
*   Soldier $$$2$$$ in the camp with the coordinate $$$x = 13$$$.
*   Soldier $$$3$$$ in the camp with the coordinate $$$x = -2023$$$.
*   Soldier $$$4$$$ in the camp with the coordinate $$$x = -2023$$$.