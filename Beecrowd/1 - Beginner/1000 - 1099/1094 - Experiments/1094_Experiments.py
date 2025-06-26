number = int(input())
total = 0
total_coelho = 0
total_rato = 0
total_sapo = 0

for _ in range(number):
    amount, animal_type = input().split()
    amount = int(amount)

    total += amount

    if animal_type == 'C':
        total_coelho += amount
    elif animal_type == 'R':
        total_rato += amount
    elif animal_type == 'S':
        total_sapo += amount

print(f"Total: {total} cobaias")
print(f"Total de coelhos: {total_coelho}")
print(f"Total de ratos: {total_rato}")
print(f"Total de sapos: {total_sapo}")
print(f"Percentual de coelhos: {(total_coelho / total * 100):.2f} %")
print(f"Percentual de ratos: {(total_rato / total * 100):.2f} %")
print(f"Percentual de sapos: {(total_sapo / total * 100):.2f} %")
