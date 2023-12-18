amount = int(input())
print(amount)

notes = [100, 50, 20, 10, 5, 2, 1]

for note in notes:
    noteAmount = amount // note
    
    print(f"{noteAmount} nota(s) de R$ {note},00")
    
    amount -= noteAmount * note