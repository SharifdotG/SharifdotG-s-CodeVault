input1 = input().split(" ")
input2 = input().split(" ")
product1Code, product1Unii, product1Price = input1
product2Code, product2Unii, product2Price = input2

total = (int(product1Unii) * float(product1Price)) + (int(product2Unii) * float(product2Price))

print(f"VALOR A PAGAR: R$ {total:.2f}")
