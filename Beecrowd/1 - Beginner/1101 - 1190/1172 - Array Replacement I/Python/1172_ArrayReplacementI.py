number = []

for i in range(10):
    num = int(input())
    
    if num <= 0:
        num = 1
        
    number.append(num)

for i, num in enumerate(number):
    print(f"X[{i}] = {num}")
