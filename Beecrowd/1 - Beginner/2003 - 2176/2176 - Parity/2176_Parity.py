binary = input()

count = 0

for digit in binary:
    if digit == '1':
        count += 1

if count % 2 == 0:
    print(binary + "0")
else:
    print(binary + "1")
