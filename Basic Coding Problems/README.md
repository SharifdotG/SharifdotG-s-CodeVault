H. The Third Letter

time limit per test

2 seconds

memory limit per test

256 megabytes

input

standard input

output

standard output

In order to win his toughest battle, Mircea came up with a great strategy for his army. He has n� soldiers and decided to arrange them in a certain way in camps. Each soldier has to belong to exactly one camp, and there is one camp at each integer point on the x�-axis (at points ⋯,-2,-1,0,1,2,⋯⋯,-2,-1,0,1,2,⋯).

The strategy consists of m� conditions. Condition i� tells that soldier ai�� should belong to a camp that is situated di�� meters in front of the camp that person bi�� belongs to. (If di<0��<0, then ai��'s camp should be -di-�� meters behind bi��'s camp.)

Now, Mircea wonders if there exists a partition of soldiers that respects the condition and he asks for your help! Answer "YES" if there is a partition of the n� soldiers that satisfies all of the m� conditions and "NO" otherwise.

Note that two different soldiers may be placed in the same camp.

Input

The first line contains a single integer t� (1≤t≤1001≤�≤100) --- the number of test cases.

The first line of each test case contains two positive integers n� and m� (2≤n≤2⋅1052≤�≤2⋅105; 1≤m≤n1≤�≤�) --- the number of soldiers, and the number of conditions respectively.

Then m� lines follow, each of them containing 33 integers: ai��, bi��, di�� (ai≠bi��≠��; 1≤ai,bi≤n1≤��,��≤�; -109≤di≤109-109≤��≤109) --- denoting the conditions explained in the statement. Note that if di�� is positive, ai�� should be di�� meters in front of bi�� and if it is negative, ai�� should be -di-�� meters behind bi��.

Note that the sum of n� over all test cases doesn't exceed 2⋅1052⋅105.

Output

For each test case, output "YES" if there is an arrangement of the n� soldiers that satisfies all of the m� conditions and "NO" otherwise.

Example

input

Copy

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

output

Copy

YES
NO
NO
YES

Note

For the first test case, we can partition the soldiers into camps in the following way: soldier:

-   Soldier 11 in the camp with the coordinate x=3�=3.
-   Soldier 22 in the camp with the coordinate x=5�=5.
-   Soldier 33 in the camp with the coordinate x=9�=9.
-   Soldier 44 in the camp with the coordinate x=11�=11.

For the second test case, there is no partition that can satisfy all the constraints at the same time.

For the third test case, there is no partition that satisfies all the constraints since we get contradictory information about the same pair.

For the fourth test case, in order to satisfy the only condition, a possible partition is:

-   Soldier 11 in the camp with the coordinate x=10�=10.
-   Soldier 22 in the camp with the coordinate x=13�=13.
-   Soldier 33 in the camp with the coordinate x=-2023�=-2023.
-   Soldier 44 in the camp with the coordinate x=-2023�=-2023.