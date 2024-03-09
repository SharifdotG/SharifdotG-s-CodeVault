code, quantity = map(int, input().split())

prices = [4.00, 4.50, 5.00, 2.00, 1.50]
price = prices[code - 1]

print(f"Total: R$ {price * quantity:.2f}")
