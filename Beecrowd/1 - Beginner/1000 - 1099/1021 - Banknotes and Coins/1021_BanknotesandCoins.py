amount = float(input())

notes = [100, 50, 20, 10, 5, 2]
coins = [100, 50, 25, 10, 5, 1]

print("NOTAS:")
for note in notes:
    quantity = int(amount / note)
    amount -= quantity * note
    print(f"{quantity} nota(s) de R$ {note / 1.00:.2f}")

amount *= 100

print("MOEDAS:")
for coin in coins:
    quantity = int(amount / coin)
    amount -= quantity * coin
    print(f"{quantity} moeda(s) de R$ {coin / 100.0:.2f}")