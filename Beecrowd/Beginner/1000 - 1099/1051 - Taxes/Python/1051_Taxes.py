salary = float(input())

tax = 0

if salary > 4500:
    tax += (salary - 4500) * 0.28
    salary = 4500

if salary > 3000:
    tax += (salary - 3000) * 0.18
    salary = 3000

if salary > 2000:
    tax += (salary - 2000) * 0.08
    salary = 2000

if tax == 0:
    print("Isento")
else:
    print(f"R$ {tax:.2f}")
