par = [0] * 5
impar = [0] * 5
parIndex = 0
imparIndex = 0

for i in range(15):
    number = int(input())

    if number % 2 == 0:
        par[parIndex] = number
        parIndex += 1
    else:
        impar[imparIndex] = number
        imparIndex += 1

    if parIndex == 5:
        for j in range(5):
            print(f"par[{j}] = {par[j]}")

        parIndex = 0

    if imparIndex == 5:
        for j in range(5):
            print(f"impar[{j}] = {impar[j]}")
        
        imparIndex = 0

for i in range(imparIndex):
    print(f"impar[{i}] = {impar[i]}")

for i in range(parIndex):
    print(f"par[{i}] = {par[i]}")
