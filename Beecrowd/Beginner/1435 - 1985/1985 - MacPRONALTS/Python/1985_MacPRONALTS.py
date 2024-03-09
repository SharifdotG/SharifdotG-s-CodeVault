products = int(input())

product = []
quantity = []

for _ in range(products):
    p, q = map(int, input().split())
    product.append(p)
    quantity.append(q)

total = 0

for i in range(products):
    if product[i] == 1001:
        total += 1.50 * quantity[i]
    elif product[i] == 1002:
        total += 2.50 * quantity[i]
    elif product[i] == 1003:
        total += 3.50 * quantity[i]
    elif product[i] == 1004:
        total += 4.50 * quantity[i]
    elif product[i] == 1005:
        total += 5.50 * quantity[i]

print(f"{total:.2f}")
