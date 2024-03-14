number = int(input())

array = [i % number for i in range(1000)]

for i in range(1000):
    print(f"N[{i}] = {array[i]}")
