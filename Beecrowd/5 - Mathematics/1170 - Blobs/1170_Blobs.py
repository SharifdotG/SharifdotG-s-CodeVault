n = int(input())

for _ in range(n):
    x = float(input())
    
    days = 0
    while x > 1:
        x /= 2
        days += 1
    
    print(f"{days} dias")
