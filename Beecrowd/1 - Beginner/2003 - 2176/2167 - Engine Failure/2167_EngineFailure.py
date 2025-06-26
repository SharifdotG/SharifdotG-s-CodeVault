speed = int(input())
rpm = list(map(int, input().split()))

for i in range(speed - 1):
    if rpm[i] > rpm[i + 1]:
        print(i + 2)
        break
else:
    print(0)
