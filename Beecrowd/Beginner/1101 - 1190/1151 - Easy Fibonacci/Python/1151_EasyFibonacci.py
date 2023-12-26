number = int(input())
first, second = 0, 1

for i in range(1, number + 1):
    if i == number:
        print(first)
    else:
        print(first, end=" ")

    next_val = first + second
    first = second
    second = next_val
