s = 1

for i in range(3, 40, 2):
    s += i / (2 ** ((i - 1) // 2))

print(f"{s:.2f}")
