import sys

input = sys.stdin.read

data = input().strip().split()
index = 0
n = int(data[index])
index += 1

results = []

while n > 0:
    s1 = data[index]
    s2 = data[index + 1]
    index += 2

    i, j = 0, 0
    result = []

    while i < len(s1) or j < len(s2):
        if i < len(s1):
            result.append(s1[i])
            i += 1
        if j < len(s2):
            result.append(s2[j])
            j += 1

    results.append("".join(result))
    n -= 1

print("\n".join(results))
