salary = float(input())

new_salary = 0.0
percentage = 0

if salary <= 400:
    new_salary = salary * 1.15
    percentage = 15
elif salary <= 800:
    new_salary = salary * 1.12
    percentage = 12
elif salary <= 1200:
    new_salary = salary * 1.10
    percentage = 10
elif salary <= 2000:
    new_salary = salary * 1.07
    percentage = 7
else:
    new_salary = salary * 1.04
    percentage = 4

print(f"Novo salario: {new_salary:.2f}")
print(f"Reajuste ganho: {new_salary - salary:.2f}")
print(f"Em percentual: {percentage} %")
