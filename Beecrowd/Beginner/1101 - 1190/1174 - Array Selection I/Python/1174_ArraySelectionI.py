number = [0] * 100

for i in range(100):
    number[i] = float(input())

    if number[i] <= 10:
        print("A[{}] = {:.1f}".format(i, number[i]))
