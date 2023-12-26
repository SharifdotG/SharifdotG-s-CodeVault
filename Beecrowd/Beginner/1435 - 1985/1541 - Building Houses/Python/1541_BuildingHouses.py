import math

while True:
    n = input().split()
    if n == ['0']:
        break
    
    size1, size2, maxAllowed = n
    size1, size2, maxAllowed = int(size1), int(size2), int(maxAllowed)
    
    area = size1 * size2
    size3 = math.sqrt((area * 100) / maxAllowed)
    
    print(int(size3))
