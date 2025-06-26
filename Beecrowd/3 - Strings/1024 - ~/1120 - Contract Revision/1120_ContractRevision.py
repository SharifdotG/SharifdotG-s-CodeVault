import sys

input = sys.stdin.read
data = input().splitlines()

for line in data:
    d, n = line.split()
    if d == "0" and n == "0":
        break

    n = n.replace(d, "")
    n = n.lstrip("0")

    if not n:
        print(0)
    else:
        print(n)
