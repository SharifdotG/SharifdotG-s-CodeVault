even = odd = positive = negative = 0

for i in range(5):
    number = int(input())

    if number % 2 == 0:
        even += 1
    else:
        odd += 1

    if number > 0:
        positive += 1
    elif number < 0:
        negative += 1

print(f"{even} valor(es) par(es)")
print(f"{odd} valor(es) impar(es)")
print(f"{positive} valor(es) positivo(s)")
print(f"{negative} valor(es) negativo(s)")
